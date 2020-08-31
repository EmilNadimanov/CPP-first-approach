#ifndef _SORCERER_
# define _SORCERER_

#include <string>
#include <iostream>
#include "Peon.hpp"

class Sorcerer
{
	private:
		std::string name;
		std::string title;
	public:
						Sorcerer();
						Sorcerer(std::string name, std::string title);
						Sorcerer(Sorcerer const& obj);
						~Sorcerer();
		void			operator=(Sorcerer const& obj);
		std::string		getName(void) const;
		std::string		getTitle(void) const;
		void			polymorph(Victim const &obj);

};
		std::ostream&	operator<<(std::ostream& os, Sorcerer const& obj);

#endif
