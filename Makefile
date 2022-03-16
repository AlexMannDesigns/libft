# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amann <amann@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/15 11:48:22 by amann             #+#    #+#              #
#    Updated: 2022/03/16 19:24:54 by amann            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
LIB_DIR = srcs/
GNL_DIR	= get_next_line/
PRF_DIR = ft_printf/
LIB_OBJ = srcs/*.o
GNL_OBJ = get_next_line/*.o
PRF_OBJ = ft_printf/*.o

all: $(NAME)

$(NAME):
	@$(MAKE) -C $(LIB_DIR)
	@$(MAKE) -C $(GNL_DIR)
	@$(MAKE) -C $(PRF_DIR)
	@ar rcs $(NAME) $(LIB_OBJ) $(GNL_OBJ) $(PRF_OBJ)

clean:
	@$(MAKE) -C $(LIB_DIR) clean
	@$(MAKE) -C $(GNL_DIR) clean
	@$(MAKE) -C $(PRF_DIR) clean

fclean: clean
	@$(MAKE) -C $(LIB_DIR) fclean
	@$(MAKE) -C $(GNL_DIR) fclean
	@$(MAKE) -C $(PRF_DIR) fclean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 
