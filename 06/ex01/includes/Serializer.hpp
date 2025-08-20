#pragma once

#include <stdint.h>

typedef struct Data {
	int	value;
} Data;

class Serializer
{
private:
	Serializer(/* args */);
	Serializer(const Serializer&);
	~Serializer();
	Serializer& operator=(const Serializer&);
	/* data */
public:

	static uintptr_t	serialize(Data* ptr);
	static Data*		deserialize(uintptr_t raw);
};