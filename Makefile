cc = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAG = rc

NAME = libft.a
# SRC_DIR = .
# INC_DIR = .
# CUR_DIR = $(shell pwd)
# MY_SOURCES = $(wildcard *.c)
MY_SOURCES = \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strlen.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strdup.c \
	ft_calloc.c \
	ft_itoa.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_strmapi.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c 
	
MY_OBJECTS = $(MY_SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(MY_OBJECTS)
	@echo "Objects: $(MY_OBJECTS)"
		$(AR) $(ARFLAG) $(NAME) $(MY_OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -f $(MY_OBJECTS)

fclean: clean 
	rm -f $(NAME)

re: fclean all 
		
