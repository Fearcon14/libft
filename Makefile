CC	=	cc

CFLAGS	=	-Wall -Wextra -Werror

NAME	=	libft.a

MY_SOURCES	=	ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c

MY_OBJECTS	=	$(MY_SOURCES:%.c=%.o)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(MY_OBJECTS)
	ar rcs $(NAME) $(MY_OBJECTS)

all: $(NAME)

clean:
		rm -f $(MY_OBJECTS)

fclean:	clean
		rm -f $(NAME)

re:		fclean all

.PHONY: all clean fclean re
