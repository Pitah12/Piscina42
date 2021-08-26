SRCS	= 	utils.c \
			initialize.c \
			main.c \
			initialize_tools.c \
			logic.c \
			logic_aux.c \
			handle_error.c

CC		= gcc


CFLAGS	= -Wall -Wextra -Werror

NAME	= bsq

RM		= rm -f


${NAME}:
		${CC} ${CFLAGS} ${SRCS} -o ${NAME}

all:		${NAME}

fclean:		
			${RM} ${NAME}

.PHONY:		all fclean 