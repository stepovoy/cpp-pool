NAME=phonebook
SOURCES=main.cpp\
		Contact.class.cpp
	
FLAGS=-Wall -Wextra -Werror
OBJEcontatctS=$(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME):$(OBJEcontatctS)
	clang++ $(FLAGS) -o $(NAME) $(OBJEcontatctS) -lncurses

%.o:%.cpp
	clang++ -c -o $@ $<

clean:
	rm -Rf $(OBJEcontatctS)

fclean: clean
	rm -Rf $(NAME)

re: fclean all