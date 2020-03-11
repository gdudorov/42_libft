/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 22:18:24 by gdudorov          #+#    #+#             */
/*   Updated: 2020/03/08 22:45:44 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tab;
	size_t	i;

	if (s == NULL || start > ft_strlen(s))
		return (NULL);
	tab = (char *)malloc(sizeof(*tab) * len + 1);
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start])
	{
		tab[i] = s[start];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
