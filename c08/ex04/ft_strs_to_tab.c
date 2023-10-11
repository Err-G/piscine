/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 05:18:51 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/08/10 14:17:28 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	char	*buf;

	buf = malloc(sizeof(*src) * ft_strlen(src) + 1);
	if (!buf)
		return (0);
	dest = buf;
	while (*src)
		*buf++ = *src++;
	*buf = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock;
	t_stock_str	*buffer;
	int			index;

	stock = malloc(sizeof(*stock) * (ac + 1));
	if (!stock)
		return (NULL);
	buffer = stock;
	index = 0;
	while (index < ac)
	{
		buffer->size = ft_strlen(*av);
		buffer->str = *av;
		buffer->copy = ft_strdup(*av);
		av++;
		buffer++;
		index++;
	}
	buffer->str = 0;
	return (stock);
}
