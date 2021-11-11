#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *initial_zombie = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        initial_zombie[i].setname(name);
        initial_zombie[i].announce();
    }
    return initial_zombie;
}