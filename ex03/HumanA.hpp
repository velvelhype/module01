#ifndef HumanA_HPP
# define HumanA_HPP
#include "Weapon.hpp"

class HumanA
{
    public :
        HumanA(std::string, Weapon&);
        ~HumanA(void);
        void attack();
    private :
        std::string _name;
        Weapon& _weapon;

};

#endif