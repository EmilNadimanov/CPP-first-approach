#include "Logger.hpp"

int main()
{
	std::string op;
	std::string message;
	Logger security("secur_log.txt");

	std::cout << "Choose action:\n\t1: Log to console\n\t2: Log to file\n\t3: Enter log\n";
	do {
		std::cout << "Enter type of action: ";
		std::cin >> op;
	} while(op[1] == '\0' && (op[0] < '1' || op[0] > '3'));
	std::cout << "Enter message: " << std::ends;
	std::cin.ignore(1000, '\n');
	std::getline(std::cin, message);
	security.log(op, message);
}
