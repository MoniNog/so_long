NAME = test_mlx
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I./lib/minilibx/minilibx-linux -I./lib/libft
LIBFT_PATH = ./lib/libft
MLX_PATH = ./lib/minilibx/minilibx-linux
LIBFT = -L$(LIBFT_PATH) -lft
MLX = -L$(MLX_PATH) -lmlx -lXext -lX11 -lm -lbsd

SRC = mapa.c
OBJS = $(SRC:.c=.o)

all: $(NAME)
#macOS	gcc $(OBJS) -o so_long -lmlx -framework OpenGL -framework AppKit

$(NAME): $(OBJS)
	make -C ./lib/libft
	$(CC) $(OBJS) -o $(NAME) $(CFLAGS) $(LIBFT) $(MLX)

$(OBJS): %.o : %.c
	$(CC) $(CFLAGS) -I$(LIBFT_PATH) -I$(MLX_PATH) -c $< -o $@

clean:
	make -C ./lib/libft clean
	make -C ./lib/minilibx/minilibx-linux
	rm -f $(OBJ)

fclean: clean
	make -C ./lib/libft fclean
	make -C ./lib/minilibx/minilibx-linux
	rm -f $(NAME)

re: fclean all