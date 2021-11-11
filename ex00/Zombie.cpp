#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name_(name)
{
};

Zombie::~Zombie(void)
{
    std::cout<<'<'<<name_<<'>';
    std::cout<<" deleted!"<<std::endl;
};

void    Zombie::announce(void )const
{
    std::cout<<name_;
    std::cout<<"BraiiiiiiinnnzzzZ..."<<std::endl;
}