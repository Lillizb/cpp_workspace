#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
    std::cout << "I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for it!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    int index = -1;
    void (Harl::*func[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR" };

    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
            index = i;
    }
    for (int i = index; i < 4; i++)
    {
        switch (i)
        {
            case 0:
                (this->*func[0])();
                std::cout << std::endl;
                break;
            case 1:
                (this->*func[1])();
                std::cout << std::endl;
                break;
            case 2:
                (this->*func[2])();
                std::cout << std::endl;
                break;
            case 3:
                (this->*func[3])();
                std::cout << std::endl;
                break;
            default:
            break;
        }
    }
}