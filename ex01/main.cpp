#include "Zombie.hpp"
# include <iostream>
# include <string>

Zombie* zombieHorde( int N, std::string name);

int main()
{
    Zombie *ini_zombie = zombieHorde(10, "Lone rage");
    for(int i = 0; i < 10; i++)
    {
        //ini_zombie->announce();
        ini_zombie++;
    }
    return 0;
}