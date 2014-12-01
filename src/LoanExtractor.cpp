#include "Poco/Exception.h"
#include "Poco/RegularExpression.h"
#include <iostream>
#include "LoanExtractor.h"

using Poco::RegularExpression;
using Poco::RegularExpressionException;


std::vector<LibraryLoan> LoanExtractor::ExtractLoans(std::string html)
{
	std::string matchText;
	int numMatches = 0;
	RegularExpression::Match match;
	std::string::size_type htmlOffset = 0;
	std::vector<LibraryLoan> loans;

	try
	{
		std::string reg = R"(<tr.*tr>)";
		RegularExpression regex(reg, RegularExpression::RE_EXTENDED | RegularExpression::RE_MULTILINE | RegularExpression::RE_DOTALL | RegularExpression::RE_UNGREEDY);

		while (regex.match(html, htmlOffset, match))
		{
			htmlOffset = match.offset + match.length;
			std::cout << "*****************************************************************************" << std::endl;
			std::string matchString(html, match.offset, match.length);

			LibraryLoan* pLoan = ExtractLoan(matchString);
			if (pLoan != NULL)
			{
				loans.push_back(*pLoan);
			}
		}
		std::cout << "*****************************************************************************" << std::endl;

	}
	catch (RegularExpressionException& ree)
	{
		std::cout << ree.message();
	}

	return loans;
}

LibraryLoan* LoanExtractor::ExtractLoan(std::string tableRow)
{
	LibraryLoan* pLoan = NULL;
	RegularExpression regex(R"(<img.*>\s*(\w+.*\w+)\s*</a>.*<span.*>(.*)</span>.*<td.*>(.*)</td>)",
		RegularExpression::RE_MULTILINE | RegularExpression::RE_DOTALL | RegularExpression::RE_UNGREEDY);
	std::vector<std::string> strings;

	regex.split(tableRow, strings);

	for (int i = 1; i < strings.size(); i++)
	{
		std::cout << strings[i] << std::endl;
	}

	if (strings.size() >= 4)
	{
		pLoan = new LibraryLoan(strings[1], strings[2]);
	}

	return pLoan;
}
