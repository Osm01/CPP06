
#include "ScalarConverter.h"

int main(int argc, const char **argv)
{
	if (argc == 2)
		ScalarConverter::convert(argv[1]);
	else
		std::cout << RED << (argc == 1 ? "Less argument" : "too many argument") << RESET << std::endl;
	return 0;
}

//testing inf
//	float inf = std::numeric_limits<float>::infinity();
//	std::cout << inf << std::endl;
//testing nan
// 	double nanDouble = std::numeric_limits<double>::quiet_NaN();
//	float nanFloat = std::numeric_limits<float>::quiet_NaN();
//	std::cout << nanDouble << " " << nanFloat << std::endl;
// Check if a value is NaN
//	float nanFloat = std::sqrt(-1.0f);
//	if (isnan(nanFloat)) {
// 		std::cout << "Value is NaN" << std::endl;
//	} else {
//		std::cout << "Value is not NaN" << std::endl;
//	}