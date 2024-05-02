NAME = test_mlx
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I./lib/minilibx/minilibx-linux -I./lib/libft
LIBFT_PATH = ./lib/libft
MLX_PATH = ./lib/minilibx/minilibx-linux
LIBFT = -L$(LIBFT_PATH) -lft
MLX = -L$(MLX_PATH) -lmlx -lXext -lX11 -lm -lbsd

# SRC = so_long.c get_next_line.c get_next_line_utils.c map.c
SRC = mapa.c
OBJS = $(SRC:.c=.o)

all: $(NAME)
#macOS	gcc $(OBJS) -o so_long -lmlx -framework OpenGL -framework AppKit
# /*LINUX*/	gcc $(OBJS) -o so_long -lmlx -lXext -lX11

# all:
# 	@echo LIBFT PATH: $(LIBFT_PATH)
# 	@echo MLX PATH: $(MLX_PATH)
# 	gcc $(OBJS) -o $(NAME) $(CFLAGS) $(LIBS)

$(NAME): $(OBJS)
	make -C ./lib/libft
	$(CC) $(OBJS) -o $(NAME) $(CFLAGS) $(LIBFT) $(MLX)

$(OBJS): %.o : %.c
	$(CC) $(CFLAGS) -I$(LIBFT_PATH) -I$(MLX_PATH) -c $< -o $@

clean:
	make -C ./lib/libft clean
	rm -f $(OBJ)

fclean: clean
	make -C ./lib/libft fclean
	rm -f $(NAME)

re: fclean all