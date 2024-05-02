/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moni <moni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:13:55 by moni              #+#    #+#             */
/*   Updated: 2024/05/02 15:17:12 by moni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// recherche la derniere occurence du searchedChar

char	*ft_strrchr(const char *str, int searchedChar)
{
	int	len;

	len = ft_strlen(str);
	if (str[len] == (char)searchedChar)
		return ((char *)&str[len]);
	while (len >= 0)
	{
		if (str[len] == (char)searchedChar)
			return ((char *)&str[len]);
		len--;
	}
	return (NULL);
}
