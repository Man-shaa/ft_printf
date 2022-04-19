NAME =	libftprintf.a

SRCS =	ft_putchar.c ft_strrchr.c ft_intlen.c ft_strlen.c \
		ft_putstr.c ft_putnbr.c ft_putnbr_unsigned.c \
		ft_puthex.c ft_search_arg.c ft_read_text.c ft_printf.c

OBJS =	${SRCS .c=.o}

CC = gcc

RM =	rm -f

FLAGS =	-Wall -Wextra -Werror

all : ${NAME}

.c.o :
	${CC} ${FLAGS} .c $< .o ${<:.c=.o}

${NAME} :	${OBJS}
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : re all clean fclean