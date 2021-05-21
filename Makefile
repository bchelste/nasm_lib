# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: artempot <artempot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/21 14:18:37 by artempot          #+#    #+#              #
#    Updated: 2021/05/21 19:15:41 by artempot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libasm.a

SRCS		= ft_strlen.s

OBJS		= $(SRCS:.s=.o)

FLAGS		= -Wall -Wextra -Werror

NASM_FLAGS	= -f macho64

RM			= rm -f

$(NAME):	$(OBJS)
			ar rcs $(NAME) $?

all:		$(NAME)

clean:		
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

main:		

.PHONY:		all clean fclean re main