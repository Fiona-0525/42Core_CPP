NAME = sed_is_for_losers

SRCS = main.cpp replaceall.cpp 

OBJS = $(SRCS:.cpp=.o)

CXX = 	c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++17

all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) *.txt *.replace

re: fclean all

.PHONY: all clean fclean re