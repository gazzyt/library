#pragma once

#include<string>
#include "Poco/DateTime.h"

class LibraryLoan
{
public:
	LibraryLoan(const std::string& title, const std::string& author, const std::string& dueDate, Poco::DateTime dueDate2);

	const std::string& getTitle();

	const std::string& getAuthor();

	const std::string& getDueDate();

	const Poco::DateTime getDueDate2();

private:
	std::string _title;
	std::string _author;
	std::string _dueDate;
	Poco::DateTime _dueDate2;
};