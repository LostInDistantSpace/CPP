# ---------------------------------------------------------------------------- #
#                                  VARIABLES                                   #
# ---------------------------------------------------------------------------- #

NAME			:=	brainz

# ---------------------------------- PROGRAM --------------------------------- #

SRC				:=	main.cpp
SRC				+=	Zombie.cpp
SRC				+=	newZombie.cpp
SRC				+=	randomChump.cpp

# --------------------------------- COMMANDS --------------------------------- #

CPP				:=	c++
RM				:=	/bin/rm -rf

# ----------------------------------- FLAGS ---------------------------------- #

CPPFLAGS		:=	-std=c++98
CPPFLAGS		+=	-Wall
CPPFLAGS		+=	-Wextra
CPPFLAGS		+=	-Werror

# ---------------------------------------------------------------------------- #
#                                    RULES                                     #
# ---------------------------------------------------------------------------- #

all:		$(NAME)

$(NAME):	$(SRC)
			$(CPP) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
			$(RM) $(OBJS_DIR)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all debug clean fclean re
