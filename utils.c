#include "so_long.h"

int	ft_ismaprectangular(char **map)
{
	int	i;
	int	len;

	i = 0;
	len = 	ft_strlen(map[i]);
	while (map[i])
	{
		if (map[i] != len)
			ft_printf("Error\nMap is not rectangular\n");
		i++;
	}
	return (1);
}
