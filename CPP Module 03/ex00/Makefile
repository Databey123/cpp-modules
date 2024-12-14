SRC	=	main.cpp \
				ClapTrap.cpp

NAME = ClapTrap
CXX  = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
OBJ = $(SRC:.cpp=.o)

RM	= rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re: 	fclean $(NAME)

.PHONY: all clean fclean re