NAME = pipex

SRC = main.c utils.c

OBJS = ${SRC:.c=.o}

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I include
LIBFT_PATH = ./libft
LIBFT = -L ${LIBFT_PATH} -lft

.c.o:
		${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	@echo "Building libft..."
	${MAKE} -C ${LIBFT_PATH} all
	@echo "Linking pipex..."
	${CC} ${CFLAGS} ${INCLUDE} ${OBJS} ${LIBFT} -o ${NAME}

all: ${NAME}

clean:
	${MAKE} -C ${LIBFT_PATH} clean
	${RM} ${OBJS}

fclean: clean
	${MAKE} -C ${LIBFT_PATH} fclean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
