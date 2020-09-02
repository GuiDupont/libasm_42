NAME= libasm.a
CC= nasm
FLAGS= -f macho64
OBJS = $(SRCS:.c=.o)
SRCS= \
	  ft_strlen.s\

all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) -c $(FLAGS) $c $< -o $@ 

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: clean fclean
