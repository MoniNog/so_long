/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moni <moni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:35:43 by moni              #+#    #+#             */
/*   Updated: 2024/05/02 15:17:25 by moni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// compare deux strings

char	*ft_strstr(char *fullstr, char *substr)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	start = 0;
	while (fullstr[i])
	{
		while (fullstr[i] == substr[j])
		{
			i++;
			j++;
		}
		if (substr[j])
		{
			start = i - j;
			return (&fullstr[start]);
		}
		i++;
	}
	return (NULL);
}
