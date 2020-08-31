#ifndef _TACTICAL_MARINE_
# define _TACTICAL_MARINE_

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	public:
						TacticalMarine();
						TacticalMarine(TacticalMarine const &obj);
						~TacticalMarine();
		void			operator=(TacticalMarine const& obj);
		ISpaceMarine*	clone() const;
		void			battleCry() const;
		void			rangedAttack() const;
		void			meleeAttack() const;
};

#endif