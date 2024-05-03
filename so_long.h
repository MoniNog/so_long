#include "mlx.h"
#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

typedef struct s_game
{
	void	*mlx;
	void	*win;
	int		hauteur;
	int		largeur;
	char	*line;
} t_game;

#define KEY_ESC 65307
#define KEY_UP 65362
#define KEY_DOWN 65364
#define KEY_LEFT 65361
#define KEY_RIGHT 65363

bool	ft_ismaprectangular(char **map);
int		main(int argc, char **argv);