# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: artempot <artempot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/21 14:18:37 by artempot          #+#    #+#              #
#    Updated: 2021/05/25 19:31:02 by artempot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libasm.a

SRCS		= ft_strlen.s

OBJS		= $(SRCS:.s=.o)

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

NASMFLAGS	= -f macho64

RM			= rm -f

INC			= -I./libasm.h

%.o : %.s
			nasm $(NASMFLAGS) $< -o $@

$(NAME):	$(OBJS) Makefile
			ar rcs $(NAME) $?

all:		$(NAME)

clean:		
			$(RM) $(OBJS)

main:		all main.c
			$(CC) $(CFLAGS) $(INC) -L. -lasm main.c -o libasm
			./libasm

fclean:		clean
			$(RM) $(NAME)
			$(RM) libasm

re:			fclean all		

.PHONY:		all clean fclean re main