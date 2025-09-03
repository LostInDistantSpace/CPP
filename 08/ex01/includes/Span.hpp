#pragma once

#include <stdint.h>
#include <algorithm>
#include <iterator>
#include <vector>
#include <climits>
#include <iostream>

class Span
{
private:
	unsigned int	_N;
	unsigned int	_cur;
	std::vector<int> _vec;
	/* data */
public:
	Span(/* args */);
	Span(unsigned int N);
	Span(const Span&);
	~Span();

	Span& operator=(const Span&);
	
	const std::vector<int>& getVector() const;

	void	addNumber(int nb);

template<class ForwardIterator>
	void	addNumber(ForwardIterator start, ForwardIterator end) {
		if (std::distance(start, end) + _cur >= _N)
			throw ContainerFullException();
		_vec.insert(_vec.end(), start, end);
		_cur += std::distance(start, end);
	}

	uint32_t	shortestSpan();
	uint32_t	longestSpan();


	class ContainerFullException : public std::exception 
	{
		public:
			const char*	what() const throw();
	};

	class NotEnoughNumbersException : public std::exception 
	{
		public:
			const char*	what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const Span& obj);


#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
#define ORANGE "\033[38;5;208m"
#define VIOLET "\033[38;5;129m"
#define PINK   "\033[38;5;200m"
#define HOTPINK "\033[38;2;255;105;180m"
#define SKYBLUE "\033[38;2;135;206;235m"
#define LIME    "\033[38;2;50;205;50m"

#define BOLD     "\033[1m"
#define RESET   "\033[0m"