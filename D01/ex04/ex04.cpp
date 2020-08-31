// Make a program in which you will create a string containing "HI THIS IS BRAIN", a
// pointer to it, and a reference to it.
// You will then display it using the pointer, and finally display it using the reference.
// That’s all, no tricks.
#include <string>
#include <iostream>

int main()
{
	std::string brain;
	std::string *p_brain;
	std::string& r_brain = brain;

	brain = "HI THIS IS BRAIN";
	p_brain = &brain;
	std::cout << *p_brain << std::endl;
	std::cout << r_brain << std::endl;
	
}