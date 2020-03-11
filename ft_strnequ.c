/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 21:17:20 by gdudorov          #+#    #+#             */
/*   Updated: 2020/03/10 22:03:29 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int	i;

	i = 0;
	if (!(*s1) && !(*s2))
		return (1);
	while (n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		n--;
		i++;
	}
	return (!n ? 1 : 0);
}