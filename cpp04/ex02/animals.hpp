#ifndef ANIMALS_HPP
#define ANIMALS_HPP
#include <iostream>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string _type;
	public:
		Animal(void);
		Animal(std::string type);
		Animal(const Animal& src);
		Animal& operator=(const Animal& rhs);
		virtual ~Animal();

		virtual void makeSound() const = 0;
		std::string getType() const;

};

#endif
