/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 21:13:12 by gdudorov          #+#    #+#             */
/*   Updated: 2020/03/08 01:08:10 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int	i;
	int	j;
	int	len_s;
	int len_d;

	i = 0;
	j = 0;
	len_s = 0;
	while (dst[i])
		i++;
	len_d = i;
	while (src[len_s])
		len_s++;
	while (src[j] && ((int)dstsize - i - 1) > 0)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if (len_d + len_s <= len_s + (int)dstsize)
		return (len_d + len_s);
	return (len_s + dstsize);
}
