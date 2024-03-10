#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const & type) : _type(type)
{

}

AMateria::AMateria(const AMateria& src)
{
	*this = src;
}

AMateria& AMateria::operator=(const AMateria& rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return *this;
}

AMateria::~AMateria()
{
	std::cout << this->_type << " destroyed" << std::endl;
}

std::string const &AMateria::getType() const
{
	return this->_type;
}

AMateria* AMateria::clone() const
{
	return (AMateria*)this;
}

void AMateria::use(ICharacter& target)
{
	
}