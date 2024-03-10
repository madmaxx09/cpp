#include "Materia.hpp"

class Ice : public MateriaSource
{
	private:
		std::string _type;
	public:
		Ice();
		~Ice();


		AMateria* clone() const;
		
};


