NAME		=	ex01

SRCS		=	${wildcard *.cpp}

OBJS		=	${SRCS:.cpp=.o}

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -fsanitize=address

CXX			= c++

${NAME}:	${OBJS}
				${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME} -fsanitize=address

all: 		${NAME}

clean:		
			rm -rf ${OBJS}

fclean:	clean
			rm -rf ${OBJS} ${NAME}

re:		fclean all

.PHONY:		clean fclean re