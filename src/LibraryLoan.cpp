#include "LibraryLoan.h"

LibraryLoan::LibraryLoan(const std::string& title, const std::string& author, const std::string& dueDate)
	: _title(title), _author(author), _dueDate(dueDate)
{}

const std::string& LibraryLoan::getTitle()
{
	return _title;
}

const std::string& LibraryLoan::getAuthor()
{
	return _author;
}

const std::string& LibraryLoan::getDueDate()
{
	return _dueDate;
}
