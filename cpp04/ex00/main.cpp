#include "animals.hpp"
#include "wrongAnimal.hpp"
#include "wrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"	

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;

	const WrongAnimal* wrongbeast = new WrongAnimal();
	const WrongAnimal* wrongcat = new WrongCat();

	std::cout << "Wrong animal type : " << wrongbeast->getType() << std::endl;
	std::cout << "Wrong cat type : " << wrongcat->getType() << std::endl;
	wrongbeast->makeSound();
	wrongcat->makeSound();

	delete wrongbeast;
	delete wrongcat;
	return 0;
}