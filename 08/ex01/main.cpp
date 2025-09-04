#include "Span.hpp"
#include <stdlib.h>
#include <time.h>

void printBanner(const std::string& msg, int width = 50) {
	int pad = (width - msg.size()) / 2;
	std::cout << YELLOW
		 << std::string(pad, '-') << " " << msg << " "
		 << std::string(width - pad - msg.size(), '-') 
		 << RESET << std::endl;
}

int	random_num()
{
	return (rand() % 100000);
}

int main(void)
{
	try
	{
		srand(static_cast<unsigned int>(time(0)));
		Span sp = Span(5);
		Span rand_test = Span(10);
		Span ip = Span(10000);
	
	/////////////	
	//BASE_TEST//
	/////////////
	
		printBanner("Base test");
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp << std::endl;
		std::cout << BOLD CYAN "Shortest Span : " RESET << sp.shortestSpan() << std::endl;
		std::cout << BOLD CYAN "Longest Span : " RESET <<  sp.longestSpan() << std::endl;
				
	/////////////	
	//COPY_TEST//
	/////////////
	
		printBanner("Copy test");
		Span copy_sp(sp);
		std::cout << copy_sp << std::endl;
		std::cout << BOLD CYAN "Shortest Span : " RESET <<  copy_sp.shortestSpan() << std::endl;
		std::cout << BOLD CYAN "Longest Span : " RESET <<  copy_sp.longestSpan() << std::endl;

	/////////////	
	//10_TEST////
	/////////////

		printBanner("10 test");
		std::vector<int> h_test;
		h_test.reserve(10);
		for (int i = 0; i < 9; i++)
			h_test.push_back(random_num());
		rand_test.addNumber(h_test.begin(), h_test.end());
		std::cout << rand_test << std::endl;
		std::cout << BOLD CYAN "Shortest Span : " RESET <<  rand_test.shortestSpan() << std::endl;
		std::cout << BOLD CYAN "Longest Span : " RESET <<  rand_test.longestSpan() << std::endl;

	/////////////	
	//V_TEST/////
	/////////////
	
		printBanner("10000 test");
		std::vector<int> v_test;
		v_test.reserve(10000);
		for (int i = 0; i < 9999; i++)
			v_test.push_back(random_num());
		ip.addNumber(v_test.begin(), v_test.end());
		//	ip.print();
		// std::cout << ip << std::endl;
		std::cout << BOLD CYAN "Shortest Span : " RESET <<  ip.shortestSpan() << std::endl;
		std::cout << BOLD CYAN "Longest Span : " RESET <<  ip.longestSpan() << std::endl;
	
	//////////////////
	//EXCEPTION_TEST//
	//////////////////
		printBanner("Exception test");
		Span tooSmall = Span(5);
		std::vector<int> bad;
		bad.reserve(10);
		for (int i = 0; i < 10; i++)
			bad.push_back(random_num());
		tooSmall.addNumber(bad.begin(), bad.end());
		return 0;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}