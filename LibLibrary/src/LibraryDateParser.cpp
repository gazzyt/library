#include "Poco\DateTimeParser.h"
#include "Poco\Exception.h"
#include "Poco\StringTokenizer.h"
#include "LibraryDateParser.h"

using Poco::DateTimeParser;
using Poco::InvalidArgumentException;
using Poco::StringTokenizer;

LibraryDateParser::LibraryDateParser()
{
}


LibraryDateParser::~LibraryDateParser()
{
}

DateTime LibraryDateParser::ParseDueDate(std::string dateString)
{
	StringTokenizer tokeniser(dateString, " ");

	if (tokeniser.count() != 2)
	{
		throw InvalidArgumentException("dateString must have two parts", "dateString");
	}

	std::string dayString = tokeniser[0];
	std::string monthString = tokeniser[1];

	DateTime dt;
	int tzd;
	
	DateTimeParser::parse("%f", dayString, dt, tzd);
	int month = DateTimeParser::parseMonth(monthString.begin(), monthString.end());

	

	return DateTime(2010, month, dt.day());
}