#ifndef _VICTIM_
# define _VICTIM_

#include <string>
#include <iostream>

class Victim
{
	protected:
		std::string name;
	public:
						Victim();
						Victim(std::string name);
						Victim(Victim const& obj);
						~Victim();
		void			operator=(Victim const& obj);
		std::string		getName(void) const;
		virtual void	getPolymorphed() const;

};
		std::ostream&	operator<<(std::ostream & os, Victim const& obj);


#endif
