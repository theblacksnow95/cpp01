#include "HumanA.hpp"

HumanA::HumanA(): _name("Jimmy")
{
	std::cout << "Default human contructor." << std::endl;
}

HumanA::HumanA(const std::string& name, Weapon& weapon): _name("Jhonny")
{
	if (name.empty() || name.find_first_not_of(" \t\v\r\n") == name.npos || weapon.getType().empty())
	{
		this->_name = "Jhonny";
		this->_weapon = Weapon("Unknown");
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
