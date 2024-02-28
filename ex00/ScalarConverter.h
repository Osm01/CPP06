//
// Created by ouidriss on 2/13/24.
//

#ifndef SCALARCONVERTER_H
#define SCALARCONVERTER_H

# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define PURPLE "\033[35m"
# define CYAN "\033[36m"
# define RESET "\033[0m"
# include <iostream>
# include <cmath>
# include <string.h>
#include <limits.h>
#include <cfloat>
#include <sstream>
#include <limits>

class ScalarConverter {
public:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &scalarConverter);
	ScalarConverter	&operator=(const ScalarConverter &scalarConverter);
	~ScalarConverter();
	static void	convert(const char *str);
};



#endif
