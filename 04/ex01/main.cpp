#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal*		horde[10];
	Dog*		copyDog;
	Cat*		copyCat;
	std::string	idea;

	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
		{
			horde[i] = new(std::nothrow) Dog();
			if (horde[i] == NULL)
			{
				std::cout << "Could not allocate memory for horde dogs" << std::endl;
				while (i >= 0)
					delete horde[i--];
				return (1);
			}
		}
		else
		{
	  		horde[i] = new(std::nothrow) Cat();
			if (horde[i] == NULL)
			{
				std::cout << "Could not allocate memory for horde cats" << std::endl;
				while (i >= 0)
					delete horde[i--];
				return (1);
			}
		}
	}
	for (int i = 0; i < 10; i++)	
		horde[i]->makeSound();

	dynamic_cast<Dog*>(horde[0])->addIdea("I love tennis balls!");
	dynamic_cast<Cat*>(horde[5])->addIdea("I love napping!");

	copyDog = new(std::nothrow) Dog(*dynamic_cast<Dog*>(horde[0]));
	copyCat = new(std::nothrow) Cat(*dynamic_cast<Cat*>(horde[5]));
	
	if (copyDog == NULL || copyCat == NULL)
	{
		std::cout << "Could not allocate memory for copy animals" << std::endl;
		if (copyDog)
			delete copyDog;
		if (copyCat)
			delete copyCat;
		for (int j = 0; j < 10; j++)
			delete horde[j];
		return (1);
	}

	std::cout << "\n------------\n" << std::endl;
	std::cout << "\e[1mHorde Ideas\e[0m" << std::endl;
	idea = dynamic_cast<Dog*>(horde[0])->getIdea(0);
	std::cout << idea << std::endl;
	idea = dynamic_cast<Cat*>(horde[5])->getIdea(0);
	std::cout << idea << std::endl;
	std::cout << "\n------------\n" << std::endl;
	std::cout << "\e[1mCopies Ideas\e[0m" << std::endl;
	idea = copyDog->getIdea(0);
	std::cout << idea << std::endl;
	idea = copyCat->getIdea(0);
	std::cout << idea << std::endl;

	std::cout << "\n------------\n" << std::endl;
	std::cout << "\e[1maddIdea() called on deep copies\e[0m" << std::endl;
	copyDog->addIdea("I want food...");
	copyCat->addIdea("Leave me alone.");
	std::cout << "\n------------\n" << std::endl;
	std::cout << "\e[1mHorde Ideas\e[0m" << std::endl;
	idea = dynamic_cast<Dog*>(horde[0])->getIdea(0);
	std::cout << idea << std::endl;
	idea = dynamic_cast<Cat*>(horde[5])->getIdea(0);
	std::cout << idea << std::endl;
	std::cout << "\n------------\n" << std::endl;
	std::cout << "\e[1mCopies Ideas\e[0m" << std::endl;
	idea = copyDog->getIdea(0);
	std::cout << idea << std::endl;
	idea = copyCat->getIdea(0);
	std::cout << idea << std::endl;

	std::cout << "\n------------\n" << std::endl;
	std::cout << "\e[1mSingle copy test\e[0m" << std::endl;
	std::cout << std::endl;

	Dog copy_test;
	copy_test.addIdea("Copy brain test");
	idea = copy_test.getIdea(0);
	std::cout << "\e[1mcopy_test idea: \e[0m"<< idea << std::endl;
	{
		Dog temp = copy_test;
		idea = temp.getIdea(0);
		std::cout << "\e[1mtemp idea: \e[0m" << idea << std::endl;
	}
	idea = copy_test.getIdea(0);
	std::cout << "\e[1mcopy_test idea\e[0m: " << idea << std::endl;

	std::cout << std::endl;
	std::cout << "----------------" << std::endl;
	std::cout << std::endl;

	for (int j = 0; j < 10; j++)
		delete horde[j];
	delete copyDog;
	delete copyCat;
	
	return (0);
}