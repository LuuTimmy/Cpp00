NAME		=	phonebook

SRCS		=	contact.cpp \
				phonebook.cpp \

OBJS		=	${SRCS:.cpp=.o}

FLAGS		=	-Wall -Wextra -Werror -std=c++98

${NAME}:	${OBJS}
				g++ ${FLAGS} ${OBJS} -o ${NAME}

all: 		${NAME}

clean:		
			rm -rf ${OBJS}

fclean:	clean
			rm -rf ${OBJS} ${NAME}

re:		fclean all

.PHONY:		clean fclean re