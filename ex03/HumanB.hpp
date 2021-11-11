#ifndef HumanB_HPP
# define HumanB_HPP
#include "Weapon.hpp"

class HumanB
{
    public :
        HumanB(const std::string &name);
        ~HumanB(void);
        void attack();
        void setWeapon(Weapon& weapon);

    private :
        Weapon *_weapon;
        std::string _name;

};

#endif