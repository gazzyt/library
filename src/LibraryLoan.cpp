#include "LibraryLoan.h"

LibraryLoan::LibraryLoan(const std::string& title, const std::string& author)
	: _title(title), _author(author)
{}

const std::string& LibraryLoan::getTitle()
{
	return _title;
}

const std::string& LibraryLoan::getAuthor()
{
	return _author;
}
