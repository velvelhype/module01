#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie hordes[N];
    for (int i = 0; i < N; i++)
    {
        hordes[i].name_ = name;
        hordes[i].announce();
    }
    return hordes;
}