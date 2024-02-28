//
// Created by ouidriss on 2/16/24.
//

#ifndef DATA_H
#define DATA_H

# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define PURPLE "\033[35m"
# define CYAN "\033[36m"
# define RESET "\033[0m"
# include "iostream"
#include <stdint.h>

class Data {
private:
	int	value;
public:
	Data();
	Data(int value);
	Data(const Data &data);
	Data	&operator=(const Data &data);
	~Data();
	int	get_value() const;
};
std::ostream	&operator<<(std::ostream &out , Data &d);
std::ostream	&operator<<(std::ostream &out , Data *d);

#endif //CPP06_DATA_H
