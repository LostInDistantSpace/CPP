CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -g3 -std=c++98

NAME = span

SRCS := main.cpp Span.cpp
# INCFILE = Span.hpp

OBJDIR = objects/
INCDIR	= includes/

OBJS = $(addprefix $(OBJDIR), $(SRCS:.cpp=.o))
# INCS = $(addprefix $(INCDIR), $(INCFILE))

INCLUDE = -I $(INCDIR)

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