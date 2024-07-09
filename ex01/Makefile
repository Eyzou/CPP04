NAME = Animal
CC = c++
CFLAGS = -g -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp \
	Animal.cpp \
	Dog.cpp \
	Cat.cpp\
	WrongAnimal.cpp\
	WrongCat.cpp

OBJ = $(SRCS:%.cpp=%.o)

RM = rm -rdf

ERASE		=	\033[2K\r
BLUE		=	\033[34m
YELLOW		=	\033[33m
GREEN		=	\033[32m
END			=	\033[0m

all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -O2 -c $< -o $< -o $@
	@echo "$(BLUE)-> compiling $<$(END)"

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)$(NAME) successfully compiled$(END)"

clean:
	$(RM) $(OBJ)
	@echo "$(YELLOW)$(OBJ) Object file removed$(END)"

fclean: clean
	$(RM) $(OBJ) $(NAME)
	@echo "$(YELLOW)$(NAME) removed$(END)"

re:	fclean all

.PHONY: all clean fclean re