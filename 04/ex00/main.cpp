#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	const WrongAnimal*	bad_i = new WrongCat();
	const WrongCat		wrongcat;

	std::cout << "\nThe first animal is a " << cat->getType() << std::endl;
	std::cout << "The second animal is a " <<dog->getType() << std::endl;
	std::cout << "Cat : "; cat->makeSound(); //will output the cat sound!
	std::cout << "Dog : "; dog->makeSound();
	std::cout << "Animal : "; meta->makeSound();
	
	std::cout << "\nThe third animal is a " << bad_i->getType() << std::endl;
	std::cout << "WrongCat 1 : "; wrongcat.makeSound(); //will output the wrong cat sound!
	std::cout << "WrongCat 2 : "; bad_i->makeSound(); 
	std::cout << std::endl;
	
	delete cat;
	delete dog;
	delete meta;
	delete bad_i;

	return (0);
}