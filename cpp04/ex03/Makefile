NAME = interface

SRCS = src/main.cpp \
	   src/AMateria.cpp \
	   src/MateriaSource.cpp \
	   src/Character.cpp \
	   src/Cure.cpp \
	   src/Ice.cpp

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
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re