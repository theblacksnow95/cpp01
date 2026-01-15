#include "Weapon.hpp"
#include "HumanA.hpp"

int	main()
{
	Weapon a;
	Weapon b("Bat");
	HumanA hummy;
	std::cout << a.getType() << std::endl;
	a.setType("Knife");

	std::cout << a.getType() << std::endl;
	std::cout << b.getType() << std::endl;


}
