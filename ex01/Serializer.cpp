//
// Created by ouidriss on 2/16/24.
//

#include "Serializer.h"

Serializer::Serializer()
{
	std::cout <<  GREEN << "Calling default constructor of Serializer" << RESET << std::endl;
}

Serializer::Serializer(const Serializer &serializer)
{
	static_cast<void> (serializer);
	std::cout << PURPLE << "Calling the copy constructor of Serializer" <<  RESET << std::endl;
}

Serializer &Serializer::operator=(const Serializer &serializer){
	static_cast<void>(serializer);
	std::cout << PURPLE << "Calling the copy assignment overloading of Serializer" <<  RESET << std::endl;
	return (*this);
}

Serializer::~Serializer()
{
	std::cout << RED << "Calling destructor of Serializer" << RESET << std::endl;
}

uintptr_t Serializer::serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}
