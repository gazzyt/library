#include "LibraryLoan.h"

LibraryLoan::LibraryLoan(const std::string& title, const std::string& author, const std::string& dueDate, Poco::DateTime dueDate2)
	: _title(title), _author(author), _dueDate(dueDate), _dueDate2(dueDate2)
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

const Poco::DateTime LibraryLoan::getDueDate2()
{
	return _dueDate2;
}
