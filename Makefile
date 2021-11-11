# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amann <amann@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 13:22:45 by amann             #+#    #+#              #
#    Updated: 2021/11/11 15:41:06 by amann            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#variables
NAME = libft.a
SRCDIR = srcs/
HEADER = includes/
FLAGS = -Wall -Wextra -Werror -c -I 
LIB = $(SRCDIR)*.c
OBJ = *.o
MAIN = test.c
TESTNAME = test
TESTFLAGS = -L. -lft -o $(TESTNAME) -I

#rules
all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(HEADER) $(LIB)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	gcc $(MAIN) $(TESTFLAGS) $(HEADER)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) $(TESTNAME) a.out $(SRCDIR)a.out test.txt

re: fclean all


