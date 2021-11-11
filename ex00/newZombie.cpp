#include "Zombie.hpp"

Zombie* newZombie( std::string name)
{
    Zombie *zombie;
    zombie = new Zombie(name);
    return zombie;
};

void randomChump( std::string name )
{
    Zombie zombie(name);
    zombie.announce();
};