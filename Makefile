NAME = libft.a

FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
ft_strlcpy.c ft_strlcat.c ft_tolower.c ft_toupper.c ft_memcpy.c ft_strncmp.c ft_strnstr.c

OBJECTS = $(FILES:.c=.o)
FLAGS = -Werror -Wall -Wextra

all: $(NAME)

$(OBJECTS): $(FILES)
	gcc $(FLAGS) -c $(FILES)

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)
	

clean:
	rm -r $(OBJECTS)

fclean:
	rm -r $(NAME) $(OBJECTS)

re: all 
