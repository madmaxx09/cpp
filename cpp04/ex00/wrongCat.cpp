#include "wrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "Wrong cat" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong cat destructor" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "Wrong cat sound" << std::endl;
}

std::string WrongCat::getType(void) const 
{
	return this->_type;
}