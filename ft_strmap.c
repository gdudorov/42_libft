/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 19:23:53 by gdudorov          #+#    #+#             */
/*   Updated: 2020/03/08 20:13:29 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*tab;
	int		i;
	int		len;

	len = ft_strlen(s);
	tab = (char *)malloc((sizeof(*tab) * len + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		tab[i] = f(s[i]);
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
