// Make a Logger class that must, well, do some logging.

// It will have two private functions, logToConsole and logToFile, that both take a
// string and will respectively write it to the standard output and append it to a file, which
// name will be stored in the Logger at creation time.

// You will also make a private function called makeLogEntry that will take a simple
// message as a string, and return a new string containing the message formatted to look like
// a legitimate log entry. At the very minimum, add the current date before the message,
// so we see when it’s been logged.

// Finally, create a log(std::string const & dest, std::string const & message),
// that will make a log entry with the message, and pass it to logToFile or logToConsole,
// depending on the dest parameter. As in the previous exercise, you have to use pointers
// to members to select which function to call.

#include <string>
#include <fstream>
#include <iostream> 
#include <time.h> 

class Logger
{
	private:
		std::string filename;
		void	logToConsole(std::string const & text);
		void	logToFile(std::string const & text);
		void	makeLogEntry(std::string const & message);
	public:
				Logger(std::string filename);
		void	log(std::string const & dest, std::string const & message);
};
