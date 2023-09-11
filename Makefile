# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alvapari <alvapari@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/27 21:06:00 by alvapari          #+#    #+#              #
#    Updated: 2023/09/11 12:13:43 by alvapari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_strchr.c\
		ft_strlen.c\
		ft_strrchr.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_strncmp.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memcmp.c\
		ft_memchr.c\
		ft_memmove.c\
		ft_strnstr.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_atoi.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_itoa.c\

OBJETCS = $(FILES:.c=.o)

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME) : $(OBJETCS)
		@ar rcs $(NAME) $(OBJETCS)

$(OBJETCS) : $(FILES)
		@gcc $(FLAGS) -c $(FILES) 

clean: 
	@rm -f $(OBJETCS)

fclean: 
	@rm -f $(NAME) $(OBJETCS)

re: fclean all

.PHONY: all clean fclean re