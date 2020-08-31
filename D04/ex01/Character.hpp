#ifndef _CHARACTER_HPP_
# define  _CHARACTER_HPP_

#include <string>
#include <iostream>
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

class Character
{
	private:
		std::string	name;
		int 		ap;
		AWeapon 	*weapon;
	public:
					Character();
					Character(std::string const & name);
					Character(Character const& obj);
					~Character();
		void		operator=(Character const& obj);
		void		recoverAP();
		void		equip(AWeapon*);
		void		attack(Enemy*);
		std::string	getName() const;
		int			getAP() const;
		AWeapon*	getWeapon() const;
};
	std::ostream&	operator<<(std::ostream &os, Character const& obj);

#endif
