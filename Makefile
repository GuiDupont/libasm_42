NAME= libasm.a
CC= nasm
FLAGS= -f elf64
OBJS = $(SRCS:.s=.o)
SRCS= \
		srcs/ft_write.s \
		srcs/ft_read.s \
		srcs/ft_error.s \
		srcs/ft_strlen.s \
		srcs/ft_strcpy.s \
		srcs/ft_strcmp.s \
		srcs/ft_strdup.s \


all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

%.o: %.s
	$(CC) $(FLAGS) $c $< -o $@

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: clean fclean
