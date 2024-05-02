/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moni <moni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:12:50 by moni              #+#    #+#             */
/*   Updated: 2024/05/02 15:16:11 by moni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// compte nombre de caracteres d'une string

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}
