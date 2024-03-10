#include "Materia.hpp"

MateriaSource::MateriaSource()
{
}

MateriaSource::~MateriaSource()
{
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	*this = src;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			this->materias[i] = rhs.materias[i];
		}
	}
	return *this;
}