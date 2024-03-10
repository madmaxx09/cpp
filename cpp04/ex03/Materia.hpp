#include "IMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* materias[4];
	public:
		MateriaSource();
		~MateriaSource();

		MateriaSource(MateriaSource const &src);
		MateriaSource& operator=(const MateriaSource &rhs);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};


