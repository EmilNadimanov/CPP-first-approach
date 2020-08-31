#include "Pony.hpp"
#include <iostream>

void 	ponyOnTheHeap()
{
	std::string name;
	std::string color;
	std::string in;
	int			age;
	int			is_male;

	std::cout << "Name your pony?\n";
	std::cin >> name;
	std::cout << "What color does it have?\n";
	std::cin >> color;
	std::cout << "How old is your pony?\n";
	std::cin >> age;
	std::cout << "Is it a mare (Enter '0') or a stallion(Enter '1')?\n";
	std::cin >> is_male;
	Pony *p = new Pony(color, name, is_male, age);
	p->describe();
	std::cout << "Pat the pony? Yes/No\n";
	std::cin >> in;
	if (in == "Yes")
		p->pat_the_pony();
	std::cout << "Feed the pony? Yes/No\n";
	std::cin >> in;
	if (in == "Yes")
	{
		std::cout << "What food will you feed the pony with? " << std::endl;
		std::cin >> in;
		p->feed_the_pony(in);
	}
	delete p;
}

void 	ponyOnTheStack()
{
	std::string name;
	std::string color;
	std::string in;
	int			age;
	int			is_male;

	std::cout << "Name your pony?\n";
	std::cin >> name;
	std::cout << "What color does it have?\n";
	std::cin >> color;
	std::cout << "How old is your pony?\n";
	std::cin >> age;
	std::cout << "Is it a mare (Enter '0') or a stallion(Enter '1')?\n";
	std::cin >> is_male;
	Pony p(color, name, is_male, age);
	p.describe();
	std::cout << "Pat the pony? Yes/No\n";
	std::cin >> in;
	if (in == "Yes")
		p.pat_the_pony();
	std::cout << "Feed the pony? Yes/No\n";
	std::cin >> in;
	std::cout << in;
	if (in == "Yes")
	{
		std::cout << "What food will you feed the pony with? " << std::endl;
		std::cin >> in;
		p.feed_the_pony(in);
	}
}

int 	main()
{
	std::string in;

	while(1)
	{
		std::cout << "Enter a command: ";
		std::cin >> in;
		if (in == "Heap")
		{
			std::cout << "Make yourself a heap-pony!\n";
			ponyOnTheHeap();
		}
		else if (in == "Stack")
		{
			std::cout << "Make yourself a stack-pony!\n";
			ponyOnTheStack();
		}
		else
			std::cout << "Error! Enter \"Heap\" or \"Stack\"" << std::endl;

	}
}
