#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
    public:
        Zombie(std::string);
        ~Zombie(void);
        void announce(void) const;

    private:
        std::string name_;
};

#endif