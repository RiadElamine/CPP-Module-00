
NAME = PhoneBook

SOURCE = Contact.cpp \
		 main.cpp \
		 PhoneBook.cpp

OBJECT = $(SOURCE:.cpp=.o)

HEARDER = Contact.hpp \
		  PhoneBook.hpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

%.o: %.cpp $(HEARDER)
	c++ $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJECT)
	c++ $(CFLAGS) $(OBJECT) -o $(NAME)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all
