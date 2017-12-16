NAME=ex04
SOURCES=ex04.cpp
	
FLAGS=-Wall -Wextra -Werror
OBJECTS=$(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME):$(OBJECTS)
	clang++ $(FLAGS) -o $(NAME) $(OBJECTS) -lncurses

%.o:%.cpp
	clang++ -c -o $@ $<

clean:
	rm -Rf $(OBJECTS)

fclean: clean
	rm -Rf $(NAME)

re: fclean all