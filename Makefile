# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngulam <ngulam@student.42lehavre.fr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/13 09:05:10 by ngulam            #+#    #+#              #
#    Updated: 2026/04/21 15:18:07 by ngulam           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

##############################
#         VARIABLES          #
##############################

NAME   		= push_swap
CC     		= cc
CFLAGS 		= -Wall -Wextra -Werror -g -Iincludes #nho xoa -g truoc khi nop#
RM     		= rm -f
LIBFTDIR	= libft/
SRC_DIR		= srcs/
INCLUDE 	= -L libft -lft
AR     		= ar rcs
SRCS   		= $(wildcard srcs/algorithme/*.c srcs/args_processing/*.c srcs/operation/*.c srcs/*.c)
OBJS   		= $(SRCS:.c=.o)

##############################
#         	RULES            #
##############################

all: $(NAME)
$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFTDIR)
	$(CC) $(CFLAGS) ${OBJS} ./libft/libft.a -o $(NAME) $(INCLUDE)
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
clean:
	@$(RM) $(OBJS)
	@cd $(LIBFTDIR) && $(MAKE) clean
fclean: clean
	@$(RM) $(NAME)
	@cd $(LIBFTDIR) && $(MAKE) clean
re: fclean all
.PHONY: all clean fclean re