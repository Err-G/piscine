/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 19:24:15 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/08/02 22:37:22 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	while (src[i] && (i + dest_len + 1) < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = 0;
	if (dest_len > size)
		return (src_len + size);
	else
		return (dest_len + src_len);
}
/*
// cc -Wall -Wextra -Werror -lbsd ft_strlcat.c
#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>

int	main(int argc, char **argv)
{
	char	odest[42] = "other: ";
	char	fdest[42] = "other: ";

	if (argc == 3)
	{
		printf("should print: %zu %s\n",
			strlcat(odest, argv[1], atoi(argv[2])), odest);
		printf("result print: %d %s\n",
			ft_strlcat(fdest, argv[1], atoi(argv[2])), fdest);
	}
	return (0);
}
*/
