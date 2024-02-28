#include <iostream>
#include "wrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
		std::string _type;
	public:
		WrongCat();
		~WrongCat();

		void makeSound(void) const;
		std::string getType(void) const;
};
