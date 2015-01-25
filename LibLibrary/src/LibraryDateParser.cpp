#include "Poco/DateTimeParser.h"
#include "Poco/Exception.h"
#include "Poco/StringTokenizer.h"
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
	const std::string monthString = tokeniser[1];

	DateTime dt;
	int tzd;
	std::string::const_iterator begin = monthString.begin();
	std::string::const_iterator end = monthString.end();
	
	DateTimeParser::parse("%f", dayString, dt, tzd);
	int month = DateTimeParser::parseMonth(begin, end);

	

	return DateTime(2010, month, dt.day());
}
