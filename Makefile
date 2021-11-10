NAME = BraiiiiiiinnnzzzZ
COMPILER = clang++

WFLAG = -Wall -Werror -Wextra

SRC =	main.cpp newZombie.cpp Zombie.cpp

OBJ = $(SRC:.cpp=.o)

all:
	$(COMPILER) $(WFLAG) -c $(SRC)
	$(COMPILER) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all