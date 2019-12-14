# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shanein <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/23 22:18:37 by shanein           #+#    #+#              #
#    Updated: 2019/07/23 22:31:42 by shanein          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= libft.a

PATH_SRC 	= ./srcs/

HEADERS 	= ./includes

SRCS 	=$(PATH_SRC)ft_putchar.c $(PATH_SRC)ft_swap.c $(PATH_SRC)ft_putstr.c \
	   		$(PATH_SRC)ft_strlen.c $(PATH_SRC)ft_strcmp.c

OBJ 	= ${SRCS:.c=.o}

FLAGS 	= -Wall -Wextra -Werror

all 	: $(NAME)

.c.o 	:
			gcc -c $(FLAGS) -I $(HEADERS) $< -o $(<:.c=.o)

$(NAME) : 	${OBJ}
			ar rc $(NAME) $(OBJ)

clean	:
			rm -f ${OBJ}

fclean 	: 	clean
			rm -f $(NAME)

re 		: 	fclean all
