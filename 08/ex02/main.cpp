#include "MutantStack.hpp"
#include <list>

void printBanner(const std::string& msg, int width = 50) {
	int pad = (width - msg.size()) / 2;
	std::cout << YELLOW
		 << std::string(pad, '-') << " " << msg << " "
		 << std::string(width - pad - msg.size(), '-') 
		 << RESET << std::endl;
}

int main(void)
{
	printBanner("Test Stack");
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Element at stack top : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Stack size after pop : " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	{
		MutantStack<int>::iterator it = mstack.begin();
		++it;
		--it;
		while (it != mstack.end())
			std::cout << *it++ << " ";
		std::cout << std::endl;
	}
	std::cout << "Stack size : " << mstack.size() << std::endl;
	
	//////////////
	///Copy_test//
	//////////////

	printBanner("Test copy");
	MutantStack<int> copystack(mstack);
	{
		MutantStack<int>::iterator it = copystack.begin();
		MutantStack<int>::iterator ite = copystack.end();
		++it;
		--it;
		while (it != ite)
			std::cout << *it++ << " ";
		std::cout << std::endl;
	}
	std::cout << "Stack size : " << copystack.size() << std::endl;
	
	//////////////
	///List_test//
	//////////////

	printBanner("Test List");
	std::list<int> l;
	l.push_front(5);
	l.push_front(17);
	std::cout << "Element at list front : " << l.front() << std::endl;
	l.pop_front();
	std::cout << "Stack size after pop_front : " << l.size() << std::endl;
	
	l.push_back(3);
	l.push_back(5);
	l.push_back(737);
	l.push_back(0);
	{
		std::list<int>::iterator it = l.begin();
		++it;
		--it;
		while (it != l.end())
			std::cout << *it++ << " ";
		std::cout << std::endl;
	}
	return 0;
}