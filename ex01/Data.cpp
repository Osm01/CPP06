//
// Created by ouidriss on 2/16/24.
//

#include "Data.h"

Data::Data() : value(0)
{
	std::cout <<  GREEN << "Calling default constructor of data" << RESET << std::endl;
}

Data::Data(int value) : value(value)
{
	std::cout << BLUE << "Calling the parameter constructor of data" << RESET << std::endl;
}

Data::Data(const Data &data) : value(data.value)
{
	std::cout << PURPLE << "Calling the copy constructor of data" <<  RESET << std::endl;
}

Data &Data::operator=(const Data &data){
	std::cout << PURPLE << "Calling the copy assignment overloading of data" <<  RESET << std::endl;
	if (this != &data)
		this->value = data.value;
	return (*this);
}

Data::~Data()
{
	std::cout << RED << "Calling destructor of Data" << RESET << std::endl;
}

int Data::get_value() const
{
	return (this->value);
}

std::ostream	&operator<<(std::ostream &out , Data &d)
{
	out << d.get_value();
	return out;
}

std::ostream	&operator<<(std::ostream &out , Data *d)
{
	out << d->get_value();
	return out;
}