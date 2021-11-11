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
        std::string name_;

    // private:
};

#endif