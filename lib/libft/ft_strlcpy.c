/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moni <moni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:34:25 by moni              #+#    #+#             */
/*   Updated: 2024/05/02 15:19:07 by moni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Copie une chaîne de caractères d'une source vers une destination en évitant 
// les problèmes de dépassement de mémoire.

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (!src || !dest)
		return (0);
	if (size == 0)
		return (src_len);
	while (size - 1 > i && src_len > i)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = 0;
	return (src_len);
}
