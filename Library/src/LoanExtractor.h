#pragma once

#include <vector>
#include "LibraryLoan.h"

class LoanExtractor
{
public:
	static std::vector<LibraryLoan> ExtractLoans(std::string html);

private:
	static LibraryLoan* ExtractLoan(std::string tableRow);
};