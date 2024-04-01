NAME = push_swap

CC = cc

FLAGS = -Wall -Wextra -Werror

LIBFT_BONUS = LIBFT/ft_lstnew_bonus.c LIBFT/ft_lstadd_front_bonus.c \
LIBFT/ft_lstsize_bonus.c LIBFT/ft_lstlast_bonus.c LIBFT/ft_lstadd_back_bonus.c

SRCS =  sorting/fsorting.c MOVMENT/instructions.c indexing/ft_indexing.c \
 check/ft_show_error.c check/ft_check_error.c LIBFT/ft_atoi.c LIBFT/ft_bzero.c \
LIBFT/ft_calloc.c LIBFT/ft_isalnum.c LIBFT/ft_isalpha.c LIBFT/ft_isascii.c \
LIBFT/ft_isdigit.c LIBFT/ft_strdup.c LIBFT/ft_putstr_fd.c \
LIBFT/ft_strlcat.c LIBFT/ft_strlcpy.c LIBFT/ft_strlen.c LIBFT/ft_strjoin.c \
LIBFT/ft_split.c LIBFT/ft_putchar_fd.c  LIBFT/ft_putendl_fd.c $(LIBFT_BONUS) main.c



OBJS = ${SRCS:%.c=%.o}
${NAME} : ${OBJS}
	${CC} $(FLAGS) $(OBJS) -o $(NAME)
%.o : %.c LIBFT/libft.h push_swap.h
	${CC} ${FLAGS} -c $< -o $@

all : ${NAME}
	
clean :
	@rm -f ${OBJS} ${OBJBONUS}

fclean : clean
	@rm -f ${NAME}

re : fclean all