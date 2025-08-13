CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -g3 -std=c++98

NAME = form

SRCS := main.cpp Bureaucrat.cpp AForm.cpp RobotomyRequestForm.cpp
SRCS += PresidentialPardonForm.cpp ShrubberyCreationForm.cpp Intern.cpp

OBJDIR = objects/

OBJS = $(addprefix $(OBJDIR), $(SRCS:.cpp=.o))

INCLUDE = -I includes

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCLUDE) -o $(NAME) $(OBJS)

$(OBJDIR)%.o: %.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) $(INCLUDE) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re