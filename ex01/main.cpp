#include "Zombie.hpp"

int	main()
{
	std::cout << YLL << "Initialising Zombie array" << RST << std::endl;
	Zombie *arrZomb = zombieHorde(5, "Theo");
	std::cout << "Array created." << std::endl;
	for (int i = 0; i < 5; i++)
	{
		delete arrZomb;
	}
	return (0);
}
