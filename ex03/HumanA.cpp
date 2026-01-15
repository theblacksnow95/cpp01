#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon): _name("Jhonny"), _weapon(weapon)
{
	if (name.empty() || name.find_first_not_of(" \t\v\r\n") == name.npos || weapon.getType().empty())
	{
		this->_name = "Jhonny";
		this->_weapon = Weapon();
	}
	this->_name = name;
	this->_weapon = weapon;

}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "Default human destructor." << std::endl;
}
