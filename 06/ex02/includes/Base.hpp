#pragma once

# include <stdint.h>
# include <iostream>
# include <cstdlib>
# include <ctime>

typedef struct Data {
	int	value;
} Data;

class Base
{
private:
public:
	virtual ~Base() = 0;
};

class A : public Base
{
private:
public:
};

class B : public Base
{
private:
public:
};

class C : public Base
{
private:
public:
};