#include "mlx.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_game
{
	void	*mlx;
	void	*win;
} t_game;

int key_hook(int keycode, t_game *game)
{
	printf("Keycode: %d\n", keycode);
	if (keycode == 65307)
	{
		mlx_destroy_window(game->mlx, game->win);
		exit(0);
	}
	return (0);
}

int	main(void)
{
	t_game	game;

	game.mlx = mlx_init();
	if (game.mlx == NULL)
	{
		printf("game.mlx == NULL");
		return (1);
	}
	game.win = mlx_new_window(game.mlx, 600, 600, "pixie");
	if (game.win == NULL)
	{
		printf("game.win == NULL");
		return (1);
	}	
	mlx_key_hook(game.win, key_hook, &game);
	mlx_pixel_put(game.mlx, game.win, 100, 100, 0xFF0000);
	mlx_loop(game.mlx);
	return (0);
}

mlx_put_image_to_window