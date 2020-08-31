#ifndef _AWEAPON_HPP_
# define  _AWEAPON_HPP_
#include <string>
#include <iostream>

class AWeapon
{
	private:
		std::string name;
		int			damage;
		int			apCost;
	public:
						AWeapon();
						AWeapon(std::string const & name, int apCost, int damage);
						AWeapon(AWeapon const& obj);
		virtual			~AWeapon();
		void			operator=(AWeapon const& obj);
		std::string/* virtual */	getName() const;
		int				getAPCost() const;
		int				getDamage() const;
		virtual void	attack() const =0;
};

#endif
