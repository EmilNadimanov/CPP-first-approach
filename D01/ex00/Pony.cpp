#include "Pony.hpp"
#include <iostream>

		Pony::Pony (std::string col, std::string n, int s, int a)
{
	color = col;
	name = n;
	is_male = s;
	age = a;
}

void 	Pony::pat_the_pony()
{
	std::cout << name << " says \"Tprooo\" and shakes" << (is_male ? " his" : " her") <<
	" head. You read joy and tranquility in her intelligent eyes." << std::endl;
}

void 	Pony::feed_the_pony(std::string food)
{
	std::cout << name << " sniffs the " << food << " you give " <<
		(is_male ? "him" : "her") << " and carefully takes it from you." <<
		" Having chewn everything down, " << (is_male ? "he" : "she") <<
		" looks at you with gratitude." << std::endl;
}

void 	Pony::describe()
{
	std::cout << "You see " << name << (is_male ? ". His" : ". Her") << 
		" beautiful hide is " << color << (is_male ? ". He" : ". She") <<
		" is " << age << " years old." << std::endl;
}
