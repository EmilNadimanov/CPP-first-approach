#ifndef _PLASMA_RIFLE_HPP_
# define  _PLASMA_RIFLE_HPP_
#include <string>
#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	private:
		std::string sound;
	public:
						PlasmaRifle();
						PlasmaRifle(PlasmaRifle const& obj);
						~PlasmaRifle();
		void			attack() const;
};

#endif
