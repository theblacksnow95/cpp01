#include "Zombie.hpp"

int	main()
{
	std::cout << YLL << "Initialising Zombie array" << RST << std::endl;
	Zombie *arrZomb = zombieHorde(5, "Theo");
	std::cout << "Array created." << std::endl;
	for (int i = 0; i < 5; i++)
	{
		arrZomb[i].announce();
	}
	std::cout << RED << "Destroying all alloced zombies." << std::endl;
	delete[] arrZomb;
	return (0);
}
