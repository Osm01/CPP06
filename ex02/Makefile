NAME = typeinfo

CPPCOMPI = c++ -std=c++98

CPPERRORS = -fsanitize=address -Wall -Wextra -Werror

CPPFILES = main.cpp Base.cpp A.cpp B.cpp C.cpp

all : $(NAME)

$(NAME) : $(CPPFILES)
	$(CPPCOMPI) $(CPPERRORS) $(CPPFILES) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean : clean

re : fclean all

.PHONY : all re clean fclean