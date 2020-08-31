#ifndef _SQUAD_
# define _SQUAD_

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

class Squad: public ISquad
{
	private:
		ISpaceMarine	**crew;
		int				count;
	public:
						Squad();
						Squad(Squad const& obj);
		void			operator=(Squad const& obj);
						~Squad();
		int				getCount() const;
		ISpaceMarine*	getUnit(int) const;
		int				push(ISpaceMarine*);
};

#endif
