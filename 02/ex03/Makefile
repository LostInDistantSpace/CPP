# ---------------------------------------------------------------------------- #
#                                  VARIABLES                                   #
# ---------------------------------------------------------------------------- #

NAME			:=	fixed

# ---------------------------------- PROGRAM --------------------------------- #

SRC				:=	main.cpp
SRC				+=	Fixed.cpp
SRC				+=	Point.cpp
SRC				+=	bsp.cpp

OBJS				:=	$(SRC:.cpp=.o)

# --------------------------------- COMMANDS --------------------------------- #

CXX				:=	c++
RM				:=	/bin/rm -rf

# ----------------------------------- FLAGS ---------------------------------- #

CXXFLAGS		:=	-std=c++98
CXXFLAGS		+=	-Wall
CXXFLAGS		+=	-Wextra
CXXFLAGS		+=	-Werror

# ---------------------------------------------------------------------------- #
#                                    RULES                                     #
# ---------------------------------------------------------------------------- #

all:				$(NAME)

$(NAME): $(OBJS)
					$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

nomsg: CXXFLAGS += -DMSG=0
nomsg: clean $(NAME)

clean:
					$(RM) $(OBJS)

fclean:				clean
					$(RM) $(NAME)

re:					fclean all

.PHONY:				all debug clean nomsg fclean re
