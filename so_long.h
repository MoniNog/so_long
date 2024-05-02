#include "mlx.h"
#include <stddef.h>
#include <stdlib.h>

typedef struct s_game
{
	void	*mlx;
	void	*win;
} t_game;

#define KEY_ESC 65307
#define KEY_UP 65362
#define KEY_DOWN 65364
#define KEY_LEFT 65361
#define KEY_RIGHT 65363