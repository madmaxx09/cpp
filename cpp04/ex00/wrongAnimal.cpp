#include "wrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Wrong animal" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "Wrong animal constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong animal destructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	std::cout << "Wrong animal copy" << std::endl;
	*this = src;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
	std::cout << "Wrong animal operator" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return *this;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong animal sound" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return this->_type;
}