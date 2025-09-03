#include "Span.hpp"

Span::Span() : _N(0), _cur(0) {}
Span::Span(unsigned int N) : _N(N), _cur(0) 
{
	_vec.reserve(N);
}

Span::Span(const Span& other) : _N(other._N), _cur(other._cur), _vec(other._vec) {}

Span::~Span()
{
	while (!_vec.empty())
		_vec.pop_back();
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		_N = other._N;
		_cur = other._cur;
		_vec = other._vec;
	}
	return *this;
}


const std::vector<int>& Span::getVector() const
{
	return _vec;
}

const char* Span::ContainerFullException::what() const throw()
{ 
	return "Container capacity reached, insertion impossible\n";
}

const char* Span::NotEnoughNumbersException::what() const throw()
{
	return "Less than two integers, no span can be found\n";
}

void	Span::addNumber(int nb)
{
	if (_cur >= _N)
		throw ContainerFullException();
	_vec.push_back(nb);
	_cur++;
}

uint32_t	Span::shortestSpan()
{
	if (_cur < 2)
		throw NotEnoughNumbersException();

	std::vector<int> sorted = _vec;
	std::sort(sorted.begin(), sorted.end());
	int bottom = *sorted.begin(), top = *(sorted.end() - 1);
	return (top - bottom);
}

uint32_t	Span::longestSpan()
{
	if (_cur < 2)
		throw NotEnoughNumbersException();
	std::vector<int> sorted = _vec;
	std::sort(sorted.begin(), sorted.end());

	int	min = INT_MAX;
	std::vector<int>::iterator it;
	for (it = sorted.begin(); it < sorted.end() - 1; it++)
	{
		if (*(it + 1) - *it < min)
			min = *(it + 1) - *it;
	}
	return (min);
}

std::ostream& operator<<(std::ostream& os, const Span& obj)
{
	for (std::vector<int>::const_iterator it = obj.getVector().begin(); it < obj.getVector().end(); it++)
	{
		os << *it << " ";
	}
	// write obj to stream
	return os;
}
