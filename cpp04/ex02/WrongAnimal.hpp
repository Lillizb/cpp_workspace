#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "AAnimal.hpp"

class WrongAnimal {

    protected:
        std::string type;
        
    public:
        WrongAnimal();
        ~WrongAnimal();

        void makeSound() const;
        std::string getType() const;
} ;

#endif
