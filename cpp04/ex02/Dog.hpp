#include "animals.hpp"

class Dog : public Animal
{
	private:
		Brain *_brain;
	public:
		Dog();
		~Dog();

		void makeSound(void) const;
};

