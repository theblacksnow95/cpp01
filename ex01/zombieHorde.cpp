#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N < 0)
		return (NULL);
	Zombie* arrZomb[N];
	for (int i = 0; i < N; i++)
	{
		arrZomb[i] = new Zombie(name);
	}
	return (arrZomb[0]);
}
