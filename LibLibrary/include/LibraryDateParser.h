#pragma once

#include <string>
#include "Poco/DateTime.h"

using Poco::DateTime;

class LibraryDateParser
{
public:
	LibraryDateParser();
~LibraryDateParser();

static DateTime ParseDueDate(std::string dateString);
};

