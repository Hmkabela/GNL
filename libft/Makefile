# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmkabela <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/01 12:58:54 by hmkabela          #+#    #+#              #
#    Updated: 2019/06/01 14:45:51 by hmkabela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -c -Wall -Werror -Wextra

LINKER = ar rc

CSRCS = $(shell ls | grep -E "ft_.+\.c")

OSRCS = $(CSRCS:%.c=%.o)

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) $(CSRCS)
	$(LINKER) $(NAME) $(OSRCS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OSRCS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
