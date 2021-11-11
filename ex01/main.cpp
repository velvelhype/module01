#include "Zombie.hpp"
# include <iostream>
# include <string>

Zombie* zombieHorde( int N, std::string name);

int main()
{
    Zombie *ini_zombie = zombieHorde(10, "Lone rage");
    delete[] (ini_zombie);
    return 0;
}