NAME = push_swap.a

CC = cc

FLAGS = -Wall -Wextra -Werror

LIBFT_BONUS = libft/ft_lstnew_bonus.c libft/ft_lstadd_front_bonus.c libft/ft_lstsize_bonus.c libft/ft_lstlast_bonus.c libft/ft_lstadd_back_bonus.c \

SRCS =  sorting/fsorting.c MOVMENT/instructions.c indexing/ft_indexing.c check/ft_show_error.c check/ft_check_error.c libft/ft_atoi.c libft/ft_bzero.c libft/ft_calloc.c libft/ft_isalnum.c libft/ft_isalpha.c libft/ft_isascii.c libft/ft_isdigit.c \
libft/ft_isprint.c libft/ft_memchr.c libft/ft_memcmp.c libft/ft_memcpy.c libft/ft_memmove.c libft/ft_memset.c libft/ft_strchr.c libft/ft_strdup.c \
libft/ft_strlcat.c libft/ft_strlcpy.c libft/ft_strlen.c libft/ft_strncmp.c libft/ft_strnstr.c libft/ft_strrchr.c libft/ft_tolower.c libft/ft_toupper.c \
libft/ft_substr.c libft/ft_strjoin.c libft/ft_strtrim.c libft/ft_split.c libft/ft_itoa.c libft/ft_strmapi.c libft/ft_striteri.c libft/ft_putchar_fd.c \
libft/ft_putstr_fd.c libft/ft_putendl_fd.c $(LIBFT_BONUS) \



OBJS = ${SRCS:%.c=%.o}

all : ${NAME}
	@cc $(FLAGS) main.c ${NAME} -o push_swap
%.o : %.c libft.h push_swap.h
	@${CC} ${FLAGS} -fsanitize=address -c $< -o $@

${NAME} : ${OBJS}
	@ar rc ${NAME} ${OBJS}
	
clean :
	@rm -f ${OBJS} ${OBJBONUS}

fclean : clean
	@rm -f ${NAME}

re : fclean all