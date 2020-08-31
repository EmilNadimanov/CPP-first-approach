#include "Human.hpp"
// Now, make it so this code compiles and displays two identical adresses
int main()
{
	Human		bob;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
}