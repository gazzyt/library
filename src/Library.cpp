#include "Poco/Util/Application.h"
#include "Poco/Util/OptionSet.h"
#include "Poco/Util/Option.h"
#include "Poco/Util/HelpFormatter.h"
#include <iostream>

using Poco::Util::Application;
using Poco::Util::OptionSet;
using Poco::Util::Option;
using Poco::Util::HelpFormatter;

class Library : public Poco::Util::Application
{

public:
	Library() : _helpRequested(false)
	{

	}

	~Library()
	{

	}

protected:
	void initialize(Application& self)
	{
		loadConfiguration();
		Application::initialize(self);
	}

	void uninitialize()
	{
		Application::uninitialize();
	}

	void defineOptions(OptionSet& options)
	{
		options.addOption(
			Option("help", "h", "display help")
			.required(false)
			.repeatable(false)
			);
	}

	void handleOption(const std::string& name, const std::string& value)
	{
		Application::handleOption(name, value);

		if (name == "help")
			_helpRequested = true;
	}

	void displayHelp()
	{
		HelpFormatter helpformatter(options());
		helpformatter.setCommand(commandName());
		helpformatter.setUsage("OPTIONS");
		helpformatter.setHeader("An application that talks to the library");
		helpformatter.format(std::cout);
	}

	int main(const std::vector<std::string>& args)
	{
		logger().information("Library app start");

		if (_helpRequested)
		{
			displayHelp();
		}

		return Application::EXIT_OK;
	}

private:
	bool _helpRequested;
};

POCO_APP_MAIN(Library)
