# ---------------------------------------------------------------------------- #
#                                  VARIABLES                                   #
# ---------------------------------------------------------------------------- #

NAME			:=	account

# ---------------------------------- PROGRAM --------------------------------- #

SRC				:=	Account.cpp
SRC				+=	tests.cpp

# --------------------------------- COMMANDS --------------------------------- #

CPP				:=	c++
RM				:=	/bin/rm -rf

# ----------------------------------- FLAGS ---------------------------------- #

CPPFLAGS		+=	-std=c++98
CPPFLAGS		+=	-Wall
CPPFLAGS		+=	-Wextra
CPPFLAGS		+=	-Werror

# ---------------------------------------------------------------------------- #
#                                    RULES                                     #
# ---------------------------------------------------------------------------- #

all:		$(NAME)

$(NAME):
			$(CPP) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
