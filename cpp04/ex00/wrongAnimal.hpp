#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
	private:
		std::string _type;
	public:
 		WrongAnimal();
		WrongAnimal(std::string type);
	 	~WrongAnimal();

		WrongAnimal(const WrongAnimal& src);
		WrongAnimal& operator=(const WrongAnimal& rhs);

		void makeSound(void) const;
		std::string getType(void) const;
};


















#endif