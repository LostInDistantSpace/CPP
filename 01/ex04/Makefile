# ---------------------------------------------------------------------------- #
#                                  VARIABLES                                   #
# ---------------------------------------------------------------------------- #

NAME			:=	violence

# ---------------------------------- PROGRAM --------------------------------- #

SRC				:=	main.cpp
SRC				+=	Weapon.cpp
SRC				+=	HumanA.cpp
SRC				+=	HumanB.cpp

# --------------------------------- COMMANDS --------------------------------- #

CPP				:=	c++
RM				:=	/bin/rm -rf
MKDIR			:=	mkdir -p

# ----------------------------------- PATHS ---------------------------------- #

OBJS			:=	$(SRC:.cpp=.o)

# ----------------------------------- FLAGS ---------------------------------- #

CPPFLAGS		+=	-std=c++98
CPPFLAGS		+=	-Wall
CPPFLAGS		+=	-Wextra
CPPFLAGS		+=	-Werror
CPPFLAGS		+=	-Wconversion

DEBUGFLAGS		+=	-g3

# ---------------------------------- STYLES ---------------------------------- #

RED				:=	"\033[0;31m\033[1m"
GREEN			:=	"\033[0;32m\033[1m"
BLUE			:=	"\033[0;34m\033[1m"
WHITE			:=	"\033[0;37m\033[1m"
NO_STYLE		:=	"\033[0m"

# ----------------------------------- ECHO ----------------------------------- #

ECHO			:=	echo

DELETION		:=	$(RED)Deletion$(NO_STYLE) of
CREATION		:=	$(GREEN)Creation$(NO_STYLE) of
TO_UPPER		:=	tr '[:lower:]' '[:upper:]'
PROJECT			:=	$(shell $(ECHO) $(NAME) | $(TO_UPPER))
OBJ_FILES		:=	$(BLUE)object files$(NO_STYLE)
DEPS_FILES		:=	$(BLUE)dependency files$(NO_STYLE)
AND				:=	and
COMPLETE		:=	complete
BONUS_FILES		:=	bonus object files
PROJECT_NAME	:=	$(WHITE)$(PROJECT)$(NO_STYLE)
NAME_FILE		:=	$(BLUE)$(NAME)$(NO_STYLE)
NORM_MSG		:=	$(GREEN)Norminette on $(PROJECT_NAME)$(GREEN): OK!$(NO_STYLE)

COMP_OBJS		:=	$(ECHO) $(CREATION) $(PROJECT_NAME) $(OBJ_FILES) $(AND) $(DEPS_FILES) $(COMPLETE)
COMP_NAME		:=	$(ECHO) $(CREATION) $(PROJECT_NAME) $(NAME_FILE) $(COMPLETE)
COMP_CLEAN		:=	$(ECHO) $(DELETION) $(PROJECT_NAME) $(OBJ_FILES) $(AND) $(DEPS_FILES) $(COMPLETE)
COMP_FCLEAN		:=	$(ECHO) $(DELETION) $(PROJECT_NAME) $(NAME_FILE) $(COMPLETE)

define HELP_MSG
Usage: make [TARGET]
		all         - Build the main program
		debug	    - Activate debug flags
		clean       - Remove object file(s)
		fclean      - Remove object file(s) and binary file(s)
		re          - Rebuild the program
		help        - Display this help message
endef
export HELP_MSG

HELP			:=	@$(ECHO) "$$HELP_MSG"

# ---------------------------------------------------------------------------- #
#                                    RULES                                     #
# ---------------------------------------------------------------------------- #

%.o:		%.cpp
			@$(MKDIR) $(dir $@)
			@$(CPP) $(CPPFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(COMP_OBJS)
			@$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)
			@$(COMP_NAME)

debug:
			@$(MAKE) $(MAKE_NO_PRINT) CPPFLAGS+="$(DEBUGFLAGS)" re

clean:
			@$(RM) $(OBJS)
			@$(COMP_CLEAN)

fclean:		clean
			@$(RM) $(NAME)
			@$(COMP_FCLEAN)

re:			fclean all

help:
			$(HELP)

.PHONY:		all debug clean fclean re help
