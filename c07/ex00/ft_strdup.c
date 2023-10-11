/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 18:08:42 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/08/09 02:58:28 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i] != 0)
		dest[i] = src[i];
	dest[i] = 0;
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		src_len;

	src_len = ft_strlen(src);
	dest = malloc(sizeof(char) * src_len + 1);
	if (!dest)
		return (0);
	ft_strcpy(dest, src);
	return (dest);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	char *str = ft_strdup(argv[1]);
	printf("%s\n", str);
	free(str);
	return (0);
}
*/
