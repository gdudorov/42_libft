/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 17:44:47 by gdudorov          #+#    #+#             */
/*   Updated: 2020/03/08 17:56:52 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*tab;
	size_t	i;

	tab = malloc(size + 1);
	if (tab == NULL)
		return (NULL);
	i = -1;
	while (++i <= size)
		tab[i] = '\0';
	return (tab);
}
