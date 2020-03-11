/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 19:08:47 by gdudorov          #+#    #+#             */
/*   Updated: 2020/03/08 01:08:51 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*tab;

	tab = (char *)s;
	while (*tab)
	{
		if (*tab == (char)c)
			return (tab);
		tab++;
	}
	if (c)
		return (NULL);
	return (tab);
}
