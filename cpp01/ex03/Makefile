NAME		=	ex03

SRCS		=	main.cpp \
				HumanA.cpp \
				HumanB.cpp \
				Weapon.cpp \

OBJS		=	${SRCS:.cpp=.o}

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

CXX			= c++

${NAME}:	${OBJS}
				${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

all: 		${NAME}

clean:		
			rm -rf ${OBJS}

fclean:	clean
			rm -rf ${OBJS} ${NAME}

re:		fclean all

.PHONY:		clean fclean re