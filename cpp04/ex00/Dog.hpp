#include "animals.hpp"

class Dog : public Animal
{
	private:
		std::string _type;
	public:
		Dog();
		~Dog();

		void makeSound(void) const;
};

