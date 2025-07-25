#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class WrongAnimal {

    protected:
        std::string type;
        
    public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal& other);
        WrongAnimal& operator=(const WrongAnimal& other);
		~WrongAnimal();
        
		void makeSound() const;
		std::string getType() const;
} ;

#endif
