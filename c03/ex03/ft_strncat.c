/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:31:31 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/08/02 22:40:15 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] != 0 && j < nb)
	{
		dest[j + i] = src[j];
		j++;
	}
	dest[j + i] = 0;
	return (dest);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char **argv) {
	char	odest[42] = "other string: ";
	char	fdest[42] = "other string: ";

	if (argc == 3)
	{
		printf("should print: %s\n",    strncat(odest, argv[1], atoi(argv[2])));
		printf("result print: %s\n", ft_strncat(fdest, argv[1], atoi(argv[2])));
	}
	return (0);
}
*/
