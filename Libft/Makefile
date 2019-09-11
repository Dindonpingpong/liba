# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgrass <mgrass@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/03 20:49:17 by mgrass            #+#    #+#              #
#    Updated: 2019/09/09 13:34:32 by mgrass           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

C_FILE = ft_*.c

OUT = ft_*.o

HEADER = libft.h

FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAG) -c $(C_FILE) -I $(HEADER)
	ar rc $(NAME) $(OUT)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OUT)

fclean: 
	/bin/rm -f $(NAME)

re: fclean all
