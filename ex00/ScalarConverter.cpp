//
// Created by ouidriss on 2/13/24.
//

#include "ScalarConverter.h"

ScalarConverter::ScalarConverter()
{
	std::cout << GREEN << "Calling default constructor of ScalarConverter" << RESET<<std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &scalarConverter)
{
	(void ) scalarConverter;
	std::cout << BLUE << "Calling the copy constructor of ScalarConverter" << RESET << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &scalarConverter){
	(void ) scalarConverter;
	std::cout << PURPLE << "Calling operator overloading assigment of ScalarConverter" << RESET << std::endl;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
	std::cout << RED << "Calling the destructor of ScalarConverter" << RESET << std::endl;
}

void	display_values(int displayed, const char *str)
{
	if (!str || !*str)
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : impossible" << std::endl;
		std::cout << "double : impossible" << std::endl;
		return;
	}
	long double	double_value;
	std::string	test(str);
	if (test == "+inff" || test == "-inff" || test == "inff" \
	|| test == "inf" || test == "+inf" || test == "-inf")
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : " << test << std::endl;
		std::cout << "double : " << test << std::endl;
		return;
	}
	if (test == "nan" || test == "+nan" || test == "-nan")
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : " << "nanf" << std::endl;
		std::cout << "double : " << "nan" << std::endl;
		return;
	}
	if (!displayed)
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : nanf" << std::endl;
		std::cout << "double : nan" << std::endl;
		return;
	}
	double_value = strtod(str, NULL);
	// casting to CHAR
	if (double_value > 127 || double_value < 0)
		std::cout << "char : impossible" << std::endl;
	else
	{
		std::cout << "char : " << (((double_value >= 0 && double_value <= 32) || double_value == 127) ? \
		"Non displayable" :  std::string(1, static_cast<char>(double_value))) << std::endl;
	}
	// casting to INT
	if (double_value > INT_MAX || double_value < INT_MIN)
		std::cout << "int : Overflow" << std::endl;
	else
		std::cout << "int : " << static_cast<int>(double_value) << std::endl;
	// casting to FLOAT
	if (double_value > std::numeric_limits<float>::max() \
	|| double_value < -std::numeric_limits<float>::max())
		std::cout << "float : Overflow" << std::endl;
	else
	{
		std::ostringstream oss;
		oss << static_cast<float>(double_value);
		const char *dot = strchr(oss.str().c_str(), '.');
		const char *f = strchr(oss.str().c_str(), 'f');
		if (!dot)
			std::cout << "float : " << oss.str() << ".0f" << std::endl;
		else
		{
			if (!f)
				std::cout << "float : " << oss.str() << "f" << std::endl;
			else
				std::cout << "float : " << oss.str() << std::endl;
		}
	}
	// casting to DOUBLE
	if (double_value > std::numeric_limits<double>::max() || \
	double_value < -std::numeric_limits<double>::max())
		std::cout << "double : Overflow" << std::endl;
	else
	{
		std::ostringstream oss;
		oss << double_value;
		const char *dot = strchr(oss.str().c_str(), '.');
		if (!dot)
			std::cout << "double : " << oss.str() << ".0" << std::endl;
		else
			std::cout << "double : " << oss.str() << std::endl;
	}
}

void ScalarConverter::convert(const char *str)
{
	char *endptr;
	strtod(str, &endptr);
	if (!*endptr)
		display_values(1, str);
	else
	{
		if (strlen(endptr) == 1 && *endptr == 'f')
		{
			std::string check_dot(str);
			int check = check_dot.find('.');
			if (check == -1)
				display_values(0, str);
			else
				display_values(1, str);
		}
		else
			display_values(0, str);
	}
}