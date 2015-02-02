#pragma once

#include<string>

class LibraryLoan
{
public:
	LibraryLoan(const std::string& title, const std::string& author, const std::string& dueDate);

	const std::string& getTitle();

	const std::string& getAuthor();

	const std::string& getDueDate();

private:
	std::string _title;
	std::string _author;
	std::string _dueDate;
};