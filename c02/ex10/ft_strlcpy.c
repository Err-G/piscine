/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 19:15:09 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/07/31 17:00:37 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = ft_strlen(src);
	while (size != 0 && i < size - 1 && src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (len);
}
/*
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	char a[42] = "";
	char b[42] = "entao123123";
	unsigned int size;

	size = ft_strlcpy(a, b, 6);
	printf("%s copied from: %s of size: %d", a, b, size);
}
*/
