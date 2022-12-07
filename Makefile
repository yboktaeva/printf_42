# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuboktae <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 21:09:12 by yuboktae          #+#    #+#              #
#    Updated: 2022/12/06 21:09:59 by yuboktae         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME	=	libftprintf.a

SRCS	=	ft_printf.c \
			ft_printbase.c \
			ft_strlen.c \
			ft_strchr.c \
			ft_putstr.c \
			ft_putchar.c \
			ft_putnbr.c \
			ft_unsign.c \
			ft_upperhex.c \
			ft_lowerhex.c \
			ft_point.c \

OBJS	=	${SRCS:.c=.o}

CC	=	cc

CFLAGS	=	-Wall -Wextra -Werror

${NAME}:	
	${CC} ${CFLAGS} ${SRCS} -c 
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

all:	${NAME}

clean:
	rm -f ${OBJS}

fclean:	clean
	rm -f ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
