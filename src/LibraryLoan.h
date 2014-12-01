#pragma once

#include<string>

class LibraryLoan
{
public:
	LibraryLoan(const std::string& title, const std::string& author);

	const std::string& getTitle();

	const std::string& getAuthor();

private:
	std::string _title;
	std::string _author;
};