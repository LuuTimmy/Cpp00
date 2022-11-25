NAME		=	ex01

SRCS		=	main.cpp \
				Animal.cpp \
				Dog.cpp \
				Cat.cpp \
				WrongAnimal.cpp \
				WrongCat.cpp \
				Brain.cpp \

OBJS		=	${SRCS:.cpp=.o}

FLAGS		=	-Wall -Wextra -Werror -std=c+98

${NAME}:	${OBJS}
				g++ ${FLAGS} ${OBJS} -o ${NAME}

all: 		${NAME}

clean:		
			rm -rf ${OBJS}

fclean:	clean
			rm -rf ${OBJS} ${NAME}

re:		fclean all

.PHONY:		clean fclean re