#include "Zombie.hpp"

Zombie::Zombie( std::string name )
{
    this->name = name;

}

Zombie::~Zombie()
{
    std::cout << this->name << ", you are out" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}