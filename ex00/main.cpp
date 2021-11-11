#include "Zombie.hpp"
# include <iostream>
# include <string>

Zombie* newZombie( std::string name );

void randomChump( std::string name );

int main()
{
    Zombie *a;
    a = newZombie("Kiyoshi");
    a->announce();
    randomChump("masahiko");
    delete a;

    return 0;
}