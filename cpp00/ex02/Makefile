NAME = account

SRCS = Account.cpp tests.cpp
OBJS = $(SRCS:.cpp=.o)

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

test: $(NAME)
	./$(NAME) | sed 's/\[.*\] //' > my_output.txt
	sed 's/\[.*\] //' 19920104_091532.log > log_output.txt
	diff my_output.txt log_output.txt > diff_output.txt