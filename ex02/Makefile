# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/08 20:10:29 by abakirca          #+#    #+#              #
#    Updated: 2024/12/23 15:19:39 by abakirca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	fragtrap

CC				=	c++
CFLAGS			=	-Wall -Werror -Wextra -std=c++98

RM				=	rm -rf

SRCS_DIR		=	./srcs/
OBJS_DIR		=	./objs/

SRCS 			=	$(SRCS_DIR)main.cpp $(SRCS_DIR)ClapTrap.cpp $(SRCS_DIR)ScavTrap.cpp $(SRCS_DIR)FragTrap.cpp

OBJS			=	$(patsubst $(SRCS_DIR)%.cpp, $(OBJS_DIR)%.o, $(SRCS))


COLOR_YELLOW	=	\033[0;33m
COLOR_GREEN		=	\033[0;32m
COLOR_RED		=	\033[0;31m
COLOR_END		=	\033[0m

all				:	$(NAME)

$(NAME)			:	$(OBJS)
					@$(CC) $(CFLAGS) $^ -o $(NAME)
					@echo "\n\e[1m$(COLOR_YELLOW)$(NAME)	$(COLOR_GREEN)[is ready!]\e[0m\n$(COLOR_END)"

$(OBJS_DIR)%.o	:	$(SRCS_DIR)%.cpp
					@mkdir -p $(@D)
					@$(CC) $(CFLAGS) -c $< -o $@

clean			:
					@$(RM) -rf $(OBJS_DIR)
					@echo "\e[1m$(COLOR_YELLOW)objects		$(COLOR_RED)[are deleted!]\e[0m$(COLOR_END)"
			

fclean			:	clean
					@$(RM) $(NAME)
					@echo "\e[1m$(COLOR_YELLOW)$(NAME)	$(COLOR_RED)[is deleted!]\e[0m$(COLOR_END)"

re				:	fclean all

.PHONY			:	all clean fclean re
