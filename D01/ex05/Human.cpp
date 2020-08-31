#include "Human.hpp"

const Brain*	Human::identify()
{
	return this->brain.identify();
}

const Brain&	Human::getBrain()
{
	return this->brain;
}
