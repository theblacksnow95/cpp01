#include "Weapon.hpp"
#include "HumanA.hpp"

int	main()
{
	Weapon a;
	Weapon b("  ");
	HumanA hummy("Carl", a);
	std::cout << a.getType() << std::endl;
	a.setType("Knife");
	hummy.attack();
	std::cout << a.getType() << std::endl;
	std::cout << b.getType() << "]" << std::endl;
}
