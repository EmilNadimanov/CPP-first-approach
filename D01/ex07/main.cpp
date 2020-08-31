// Make a program called replace that takes a filename and two strings, let’s call them
// s1 and s2, that are NOT empty.
// It will open the file, and write its contents to FILENAME.replace, after replacing
// every occurence of s1 with s2.
// Of course, you will handle errors as best you can, and not use the C file manipulation
// functions, because that would be cheating, and cheating’s bad, m’kay?
#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
	std::ofstream replace;
	std::ifstream input;
	std::string line;
	std::string output_filename;
	
	if (argc != 4 || argv[2][0] == '\0' || argv[3][0] == '\0')
	{
		std::cout << "Error. Write filename and two non-empty strings." <<
			std::endl;
		return -1;
	}	
	output_filename = std::string(argv[1]) + std::string(".replace");
	input.open(argv[1]);
	replace.open(&(output_filename[0]), std::fstream::app);
	if (!input.is_open() || !replace.is_open())
	{
		std::cout << "Error. Invalid filename." <<
			std::endl;
		return -1;
	}	
	while (std::getline(input, line))
	{
		while (1)
		{
			if (line.find(argv[2]) == std::string::npos)
				break;
			line.replace(line.find(argv[2]), std::string(argv[2]).length(), argv[3]);
		}
		replace << line << '\n';
	}
	input.close();	
	replace.close();
	return 0;
}
