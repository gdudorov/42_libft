/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 20:07:17 by gdudorov          #+#    #+#             */
/*   Updated: 2020/03/08 01:09:10 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tab;
	int		len;

	tab = (char *)s;
	while (*tab)
		tab++;
	len = tab - (char *)s;
	while (len >= 0)
	{
		if (*tab == (char)c)
			return (tab);
		len--;
		tab--;
	}
	if (c)
		return (NULL);
	return (tab + len - 1);
}
