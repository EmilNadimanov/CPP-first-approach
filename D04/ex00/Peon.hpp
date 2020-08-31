#ifndef _PEON_
# define _PEON_

#include <string>
#include <iostream>
#include "Victim.hpp"

class Peon: public Victim
{
	public:
						Peon();
						Peon(std::string name);
						Peon(Peon const& obj);
						~Peon();
		void			getPolymorphed() const;
};

#endif
