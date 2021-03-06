#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
    public:
        Zombie(void);
        ~Zombie(void);
        void announce(void) const;
        void setname(std::string name);

    private:
        std::string _name;
};

#endif