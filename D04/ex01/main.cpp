#include "Character.hpp"

int main()
{
	Character* zaz = new Character("zaz");
	std::cout << *zaz;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);
	zaz->attack(b);
	std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	return 0;
}
// zaz has 40 AP and is unarmed$
// * click click click *$
// zaz has 40 AP and wields a Plasma Rifle$
// zaz attacks RadScorpion with a Power Fist$
// * pschhh... SBAM! *$
// zaz has 32 AP and wields a Power Fist$
// zaz has 32 AP and wields a Plasma Rifle$
// zaz attacks RadScorpion with a Plasma Rifle$
// * piouuu piouuu piouuu *$
// zaz has 27 AP and wields a Plasma Rifle$
// zaz attacks RadScorpion with a Plasma Rifle$
// * piouuu piouuu piouuu *$
// * SPROTCH *$
// zaz has 22 AP and wields a Plasma Rifle$