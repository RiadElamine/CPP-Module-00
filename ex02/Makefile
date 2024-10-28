NAME = tests

SOURCE = Account.cpp \
		 tests.cpp

OBJECT = $(SOURCE:.cpp=.o)

HEARDER = Account.hpp 

CFLAGS = -Wall -Wextra -Werror -std=c++98

%.o: %.cpp $(HEARDER)
	c++ $(CFLAGS) -c $< -o $@

all: $(OBJECT)
	c++ $(CFLAGS) $(OBJECT) -o $(NAME)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all