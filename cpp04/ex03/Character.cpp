#include "Character.hpp"

Character::Character()
{
}

Character::~Character()
{
	std::cout << "Destroying " << this->_name << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete this->_inventory[i];
		this->_inventory[i] = NULL;
	}
}

Character::Character(std::string const name): _name(name)
{
	std::cout << name << " enters the game." << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const Character& src)
{
	*this = src;
}

Character& Character::operator=(const Character& rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		for (int i = 0; i < 4; i++)
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
			this->_inventory[i] = rhs._inventory[i];
		}
	}
	return *this;
}

std::string const & Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout << this->_name << " is now equiped with " << m->getType() << std::endl;
			return;
		}
	}
	std::cout << "The inventory of " << this->_name << " is full" << std::endl;
}

void Character::unequip(int idx)
{
	if (this->_inventory[idx] != NULL)
	{
		std::cout << this->_inventory[idx]->getType() << " removed from " << this->_name << " inventory." << std::endl;
		this->_inventory[idx] = NULL;
	}
	else
		std::cout << "Nothing to unequip at this spot of the inventory" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (this->_inventory[idx] != NULL)
	{
		std::cout << this->_name << " uses " << this->_inventory[idx]->getType() << " on " << target.getName() << std::endl;
	}
	else
		std::cout << this->_name << " cannot use an ability he does not have" << std::endl;
}

