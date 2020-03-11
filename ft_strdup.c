/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 23:17:55 by gdudorov          #+#    #+#             */
/*   Updated: 2020/03/08 15:00:08 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*tab;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (s1[len])
		len++;
	tab = (char*)(malloc(sizeof(*tab) * (len + 1)));
	if (tab)
	{
		while (i <= len)
		{
			tab[i] = s1[i];
			i++;
		}
		tab[i] = '\0';
		return (tab);
	}
	return (NULL);
}
