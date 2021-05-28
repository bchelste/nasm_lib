# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: artempot <artempot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/21 14:18:37 by artempot          #+#    #+#              #
#    Updated: 2021/05/28 15:27:04 by artempot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libasm.a

SRCS		= ft_strlen.s \
				ft_strcpy.s \
				ft_strcmp.s \
				ft_write.s \
				ft_read.s

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
			$(RM) libasm file_1 file_2

re:			fclean all		

.PHONY:		all clean fclean re main