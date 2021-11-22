# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amann <amann@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 13:22:45 by amann             #+#    #+#              #
#    Updated: 2021/11/19 16:38:22 by amann            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#variables
NAME = libft.a
SRCDIR = libft/
HEADER = includes/
FLAGS = -Wall -Wextra -Werror -c -I 
LIB = *.c
OBJ = *.o
TEST = test.c
TESTDIR = tests/
TESTNAME = test
TESTFLAGS = -L. -lft -o $(TESTNAME) -I

#rules
all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(HEADER) $(LIB)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	
test: $(NAME)
	gcc tests/$(TEST) $(TESTFLAGS) $(HEADER)

testbonus: fclean $(NAME)
	gcc $(TESTDIR)bonus_main.c $(TESTFLAGS) $(HEADER)

testmisc: fclean $(NAME)
	gcc $(TESTDIR)misc_main.c $(TESTFLAGS) $(HEADER)

testjts: fclean $(NAME)
	gcc $(TESTDIR)jts_main.c $(TESTFLAGS) $(HEADER)

testequ: fclean $(NAME)
	gcc $(TESTDIR)equsub_main.c $(TESTFLAGS) $(HEADER)

testiter: fclean $(NAME)
	gcc $(TESTDIR)iter_main.c $(TESTFLAGS) $(HEADER)

testmem2: fclean $(NAME)
	gcc $(TESTDIR)mem2_main.c $(TESTFLAGS) $(HEADER)

testis: fclean $(NAME)
	gcc $(TESTDIR)is_main.c $(TESTFLAGS) $(HEADER)

testatoi: fclean $(NAME)
	gcc $(TESTDIR)atoi_main.c $(TESTFLAGS) $(HEADER)

teststr: fclean $(NAME)
	gcc $(TESTDIR)str_main.c $(TESTFLAGS) $(HEADER)

testmem: fclean $(NAME)
	gcc $(TESTDIR)mem_main.c $(TESTFLAGS) $(HEADER)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) $(TESTNAME) a.out $(SRCDIR)a.out test.txt

re: fclean all

#for evaluating others, remove TESTDIR and move each test.c file 
#root dir with this makefile.
