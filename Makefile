# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/16 14:14:08 by mhabib-a          #+#    #+#              #
#    Updated: 2023/02/14 13:09:02 by mhabib-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAMEBONUS = checker
SRC = push_swap.c tools.c swap.c rotate.c rotate_rev.c check.c split.c tools1.c check_tools.c sort_3.c ft_sort.c sort_tools.c ft_longuest.c push.c
BONUS = checker.c get_next_line.c get_next_line_utils.c bonus_tools.c bonus_moves.c tools.c swap.c rotate.c rotate_rev.c check.c split.c tools1.c check_tools.c sort_3.c ft_sort.c sort_tools.c ft_longuest.c
OBJ = $(SRC:.c=.o)
OBJBONUS = $(BONUS:.c=.o)
CFLAGS = -Wall -Wextra -Werror
CC = cc
RM = rm -f
LIB = push_swap.h

all : $(NAME)

bonus : $(NAMEBONUS)

$(NAMEBONUS) : $(OBJBONUS)
		$(CC) $(CFLAGS) $(BONUS) -o $(NAMEBONUS)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

%.o : %.c $(LIB)
	$(CC) $(CFLAGS) -c $<

clean:
	$(RM) $(OBJ) $(OBJBONUS)

fclean : clean
	$(RM) $(NAME) $(NAMEBONUS)

re : fclean all
