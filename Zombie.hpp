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

    private:
        std::string name_;
};

#endif