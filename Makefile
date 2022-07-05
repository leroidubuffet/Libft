LIB := ar rcs

RM := rm -f

CC := gcc
CCFLAGS := -Wall -Wextra -Werror

NAME := libft.a

SRC :=	ft_memset.c ft_bzero.c ft_strlen.c ft_atoi.c ft_isdigit.c ft_isalpha.c\
ft_isprint.c ft_isascii.c ft_isalnum.c ft_memchr.c ft_memcpy.c\
ft_memcmp.c ft_memmove.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c\
ft_strncmp.c ft_toupper.c ft_tolower.c ft_strnstr.c ft_strrchr.c ft_calloc.c\
ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_substr.c\
ft_striteri.c ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_itoa.c ft_split.c

OBJ := $(SRC:c=o)

BONUSSRC := ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c\

BONUSOBJ := $(BONUSSRC:c=o)

INCLUDE := libft.h

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)

bonus: .

. : $(OBJ) $(BONUSOBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ) $(BONUSOBJ)

%o: %c
	$(CC) $(CCFLAGS) -c -o $@ $<

.PHONY: clean re fclean rebonus

clean:
	@$(RM) $(OBJ) $(BONUSOBJ)
	@echo $(OBJ) $(BONUSOBJ) "have been deleted."

fclean: clean
	@$(RM) $(NAME)
	@echo $(NAME) "has been deleted."

re: fclean all

rebonus: fclean bonus
