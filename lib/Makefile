# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkina <rkina@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/04 19:08:21 by rkina             #+#    #+#              #
#    Updated: 2019/09/10 19:17:34 by rkina            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = libft.h

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c ft_*.c -I $(HEADER)
	ar rc $(NAME) ft_*.o
	ranlib $(NAME)

clean:
	/bin/rm -f ft_*.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
