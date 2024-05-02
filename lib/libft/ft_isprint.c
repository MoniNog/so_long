/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moni <moni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:25:05 by monoguei          #+#    #+#             */
/*   Updated: 2024/05/02 15:17:30 by moni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// vérifie si un entier est un caractère imprimable

int	ft_isprint(int character)
{
	if (32 <= character && character < 127)
		return (1);
	return (0);
}
