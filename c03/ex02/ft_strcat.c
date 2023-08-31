/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:12:41 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/08/02 22:39:32 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] != 0)
	{
		dest[j + i] = src[j];
		j++;
	}
	dest[j + i] = 0;
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char	odest[42] = "other string: ";
	char	fdest[42] = "other string: ";

	if (argc == 2)
	{
		printf("should print: %s\n",    strcat(odest, argv[1]));
		printf("result print: %s\n", ft_strcat(fdest, argv[1]));
	}
	return (0);
}
*/
