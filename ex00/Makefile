NAME = scalarconverter

CPP = c++ -std=c++98

CPP_FLAGS = -Wall -Wextra -Werror -fsanitize=address

CPP_FILE = main.cpp ScalarConverter.cpp

all : $(NAME)

$(NAME) : $(CPP_FILE)
	$(CPP) $(CPP_FLAGS) $(CPP_FILE) -o $(NAME)
clean :
	rm -rf $(NAME)
fclean : clean

re : clean all

.PHONY : all clean fclean re