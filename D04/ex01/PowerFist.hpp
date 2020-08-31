#ifndef _POWER_FIST_HPP_
# define  _POWER_FIST_HPP_
#include <string>
#include <iostream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	private:
		std::string sound;
	public:
						PowerFist();
						PowerFist(PowerFist const& obj);
						~PowerFist();
		void			attack() const;
};

#endif
