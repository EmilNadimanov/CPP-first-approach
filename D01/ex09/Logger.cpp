#include "Logger.hpp"

/*PRIVATE member functions*/

void	Logger::logToConsole(std::string const & text)
{
	std::cout << text << std::endl;
}

void	Logger::logToFile(std::string const & text)
{
	std::ofstream logfile;
	logfile.open(&(filename[0]), std::fstream::app);
	logfile << text << std::endl;
	logfile.close();
}

void	Logger::makeLogEntry(std::string const & message)
{
	time_t my_time = time(NULL);
	std::string time_string;

	time_string = ctime(&my_time);
	time_string[time_string.length() - 1] = '\0';
	std::cout  << time_string << " :  " << message << std::endl;
}

/*PUBLIC member function*/

		Logger::Logger(std::string filename)
{
	this->filename = filename;
}

void	Logger::log(std::string const & dest, std::string const & message)
{
	void (Logger::*p[3])(std::string const &);
		p[0] = &Logger::logToConsole;
		p[1] = &Logger::logToFile;
		p[2] = &Logger::makeLogEntry;
	(this->*p[dest[0] - 49])(message);
}
