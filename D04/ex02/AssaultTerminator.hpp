#ifndef _ASSAULT_TERMINATOR_
# define _ASSAULT_TERMINATOR_

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:
							AssaultTerminator();
							AssaultTerminator(AssaultTerminator const &obj);
							~AssaultTerminator();
		void				operator=(AssaultTerminator const& obj);
		AssaultTerminator*	clone() const;
		void				battleCry() const;
		void				rangedAttack() const;
		void				meleeAttack() const;
};

#endif