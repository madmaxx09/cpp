#ifndef ANIMALS_HPP
#define ANIMALS_HPP
#include <iostream>

class Animal
{
	private:
		std::string _type;
	public:
		Animal(void);
		Animal(std::string type);
		Animal(const Animal& src);
		Animal& operator=(const Animal& rhs);
		virtual ~Animal();

		virtual void makeSound() const;
		std::string getType() const;

};

#endif
