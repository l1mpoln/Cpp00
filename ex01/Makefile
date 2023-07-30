# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vkuzmin <zxcmasterass@gmail.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/28 00:33:46 by vkuzmin           #+#    #+#              #
#    Updated: 2023/07/30 22:21:43 by vkuzmin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ------------------------------------- VARS ----------------------------------

NAME		=	phonebook

SRC			=	main.cpp \
				Contact.cpp \
				Phonebook.cpp

OBJS		=	$(SRC:.cpp=.o)

COMPILE		=	clang++

FLAGS		=	-Wall -Wextra -Werror --std=c++98 

EXE_NAME	=	-o phonebook

EXEC		=	phonebook

# ------------------------------------- RULES ---------------------------------
all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILE) $(FLAGS) $(OBJS) $(EXE_NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(EXEC)
	
re:	fclean all

.cpp.o:
	${COMPILE} ${FLAGS} -c $< -o ${<:.cpp=.o}

.PHONY:	all clean fclean re