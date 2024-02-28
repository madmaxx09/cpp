#include "animals.hpp"

Animal::Animal()
{
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& src)
{
	std::cout << "Animal copy constructor" << std::endl;
	*this = src;
}

Animal& Animal::operator=(const Animal& rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs )
	{
		this->_type = rhs._type;
	}
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "Sound of an Animal" <<std::endl;
}

std::string Animal::getType() const
{
	return this->_type;
}