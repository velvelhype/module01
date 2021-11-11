#include "Zombie.hpp"

// Zombie::Zombie(std::string name) : name_(name)
// {
// };


Zombie::Zombie(void)
{
};

Zombie::~Zombie(void)
{
    // std::cout<<'<'<<name_<<'>';
    std::cout<<" deleted!"<<std::endl;
};

void    Zombie::setname(std::string name)
{
    _name = name;
};

void    Zombie::announce(void )const
{
    std::cout<<_name;
    std::cout<<"BraiiiiiiinnnzzzZ..."<<std::endl;
}