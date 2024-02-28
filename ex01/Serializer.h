//
// Created by ouidriss on 2/16/24.
//

#ifndef SERIALIZER_H
#define SERIALIZER_H
#include "Data.h"

class Serializer {
public:
	Serializer();
	Serializer(const Serializer &serializer);
	Serializer	&operator=(const Serializer &serializer);
	~Serializer();
	static uintptr_t	serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};


#endif //CPP06_SERIALIZER_H
