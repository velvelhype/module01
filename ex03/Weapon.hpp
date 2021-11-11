#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <string>
#include <iostream>

class Weapon
{
    public:
        Weapon(void);
        Weapon(std::string);
        ~Weapon(void);
        const std::string& getType();
        void setType(std::string input);

    private:
        std::string _type;
};
#endif