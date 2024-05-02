/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moni <moni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:00:00 by monoguei          #+#    #+#             */
/*   Updated: 2024/05/02 15:19:07 by moni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// compare deux chaînes de caractères

int	ft_strcmp(const char *first, const char *second)
{
	int	i;

	i = 0;
	while (first[i] == second[i] && first != 0 && second != 0)
		i++;
	return (first[i] - second[i]);
}
