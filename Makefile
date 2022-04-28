NAME 		= libftprintf.a

FLAGS		= -Wall -Wextra -Werror

CONV_DIR	= conversion/

FT_DIR		= ft_utile/

SRCS 		=	${FT_DIR}ft_putchar.c			\
				${FT_DIR}ft_strrchr.c			\
				${FT_DIR}ft_intlen.c 			\
				${FT_DIR}ft_strlen.c 			\
				${CONV_DIR}ft_putstr.c			\
				${CONV_DIR}ft_putnbr.c			\
				${CONV_DIR}ft_putnbr_unsigned.c	\
				${CONV_DIR}ft_puthex.c			\
				${CONV_DIR}ft_putaddr.c			\
				ft_printf.c

OBJS 		= ${SRCS .c=.o}

CC			= gcc

RM			= rm -f

all: ${NAME}

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: re all clean fclean