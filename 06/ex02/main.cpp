#include "Base.hpp"

Base * generate(void)
{
	int i = std::rand() % 100;
	if (i <= 33){
		std::cout << "Creating A" << std::endl;
		return (dynamic_cast<Base *>(new A()));
	}
	else if (i <= 66){
		std::cout << "Creating B" << std::endl;
		return (dynamic_cast<Base *>(new B()));
	}
	else{
		std::cout << "Creating C" << std::endl;
		return (dynamic_cast<Base *>(new C()));
	}
}

void identify(Base* p)
{
	if (A* a = dynamic_cast<A*>(p))
		std::cout << "Pointer identified : A" << std::endl;
	else if (B* b = dynamic_cast<B*>(p))
		std::cout << "Pointer identified : B" << std::endl;
	else if (C* c = dynamic_cast<C*>(p))
		std::cout << "Pointer identified : C" << std::endl;
	else
		std::cout << "Pointer not recognized" << std::endl;
}

void identify(Base& p)
{
	try {
		A a = dynamic_cast<A&>(p);
		std::cout << "Pointer identified : A" << std::endl;
	}
	catch (const std::exception& e)
	{
		try {
			B b = dynamic_cast<B&>(p);
			std::cout << "Pointer identified : B" << std::endl;
		}
		catch (const std::exception& e)
		{
			try {
				C c = dynamic_cast<C&>(p);
				std::cout << "Pointer identified : C" << std::endl;
			}
			catch (const std::exception& e)
			{
				std::cout << "Pointer not recognized" << std::endl;
			}
		}
	}
}

int	main()
{
	std::srand(std::time(NULL));
		for (uint8_t i = 0; i < 100; i++) {
		Base *ptr = generate();
		identify(ptr);
		identify(*ptr);
		delete ptr;
	}
	// A a;
	// identify(dynamic_cast<Base&>(a));
	// B b;
	// identify(dynamic_cast<Base&>(b));
	// C c;
	// identify(dynamic_cast<Base&>(c));
}