#include "Cat.hpp"
#include "animals.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
	try 
	{
		this->_brain = new Brain();
	}
	catch (std::bad_alloc& e)
	{
		std::cout << "Mem alloc failure : " << e.what() << std::endl;
	}
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
	delete this->_brain;
}

Cat::Cat(const Cat& src)
{
	*this = src;
}

Cat& Cat::operator=(const Cat& rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
		this->_brain = new Brain(*rhs._brain);
	}
	return *this;
}

void Cat::makeSound(void) const 
{
	std::cout << "Miaouw" << std::endl;
}