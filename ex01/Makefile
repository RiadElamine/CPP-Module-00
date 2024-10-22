
NAME = PhoneBook

SOURCE = Contact.cpp \
		 main.cpp \
		 PhoneBook.cpp

OBJECT = $(SOURCE:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98

%.o: %.cpp
	c++ $(CFLAGS) -c $< -o $@

all: $(OBJECT)
	c++ $(CFLAGS) $(OBJECT) -o $(NAME)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all
