NAME		:=	polymorph

CPP			:=	c++

CPPFLAGS	:=	-Wall 
CPPFLAGS	+=	-Wextra
CPPFLAGS	+=	-Werror
CPPFLAGS	+=	-std=c++98

SRC			:=	main.cpp
SRC			+=	Animal.cpp
SRC			+=	Cat.cpp
SRC			+=	Dog.cpp
SRC			+=	WrongAnimal.cpp
SRC			+=	WrongCat.cpp

INCLUDE 	:=	-I include/

OBJS		:=	$(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CPP) $(CPP_FLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJS)
	$(CPP) $(CPP_FLAGS) $(INCLUDE) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONE: all clean fclean re