#include "animals.hpp"

class Cat : public Animal
{
private:
	std::string _type;
public:
	Cat();
	~Cat();

	void makeSound(void) const;
};


