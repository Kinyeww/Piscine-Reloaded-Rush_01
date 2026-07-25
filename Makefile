NAME = rush-01
CC = cc
CCFLAGS = -Wall -Wextra -Werror -Iincludes
SRCS = sources/main.c \
	   sources/brain.c \
	   sources/brain_utils.c \
	   sources/core.c \
	   sources/init_utils.c \
	   sources/parsing.c \
	   sources/eyes.c

OBJS = $(SRCS:.c=.o) 

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CCFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CCFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

me: re
	rm -rf $(OBJS)