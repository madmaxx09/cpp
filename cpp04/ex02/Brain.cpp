#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Getting smart" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Back to dummy" << std::endl;
}

Brain::Brain(const Brain& src)
{
	std::cout << "Copy constructor : brain" << std::endl;
	*this = src;
}

Brain& Brain::operator=(const Brain& rhs)
{
	std::cout << "Copy operator : brain" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0;  i < 100; i++)
		{
			this->_ideas[i] = rhs._ideas[i];
		}
	}
	return *this;
}