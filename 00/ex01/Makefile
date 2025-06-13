# ---------------------------------------------------------------------------- #
#                                  VARIABLES                                   #
# ---------------------------------------------------------------------------- #

NAME			:=	phonebook

# ---------------------------------- PROGRAM --------------------------------- #

SRC				:=	main.cpp
SRC				+=	Contact.cpp
SRC				+=	PhoneBook.cpp

# --------------------------------- COMMANDS --------------------------------- #

CPP				:=	c++
RM				:=	/bin/rm -rf
MKDIR			:=	mkdir -p

# ----------------------------------- PATHS ---------------------------------- #

INCLUDES		:=	includes/

SRCS_DIR		:=	srcs/
SRCS			:=	$(addprefix $(SRCS_DIR), $(SRC))

OBJS_DIR		:=	objects/
OBJS			:=	$(addprefix $(OBJS_DIR), $(SRC:.cpp=.o))

# ----------------------------------- FLAGS ---------------------------------- #

CPPFLAGS		+=	-std=c++98
CPPFLAGS		+=	-Wall
CPPFLAGS		+=	-Wextra
CPPFLAGS		+=	-Werror

# ---------------------------------------------------------------------------- #
#                                    RULES                                     #
# ---------------------------------------------------------------------------- #

$(OBJS_DIR)%.o:		$(SRCS_DIR)%.cpp
					@$(MKDIR) $(dir $@)
					$(CPP) $(CPPFLAGS) -I $(INCLUDES) -c $< -o $@

all:				$(NAME)

$(NAME):			$(OBJS)
					$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
					$(RM) $(OBJS_DIR)

fclean:				clean
					$(RM) $(NAME)

re:					fclean all


.PHONY:				all  clean fclean re 
