#include "Peon.hpp"

/* CONSTRUCTORS */

						Peon::Peon()
{
	this->name = "Bobby";
	std::cout << "Some random victim named Bobby just popped !" << std::endl;
}

						Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

						Peon::Peon(Peon const& obj) : Victim(obj)
{}

/* DESTRUCTOR */

						Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void					Peon::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a pink pony !" << std::endl;
}
