NAME	= zombie

SOURCES =	main.cpp
			Zombie.cpp
			newZombie.cpp
			randomChump.cpp

OBJECTS = ${SOURCES:.cpp=.o}

CFLAGS	= -Wall -Wextra -Werror

CC = g++ 

all:		${NAME}

${NAME}:	${OBJECTS}
			g++ ${OBJECTS} -o ${NAME} -std=c++98

clean:
	rm -rf ${OBJECTS} 

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re