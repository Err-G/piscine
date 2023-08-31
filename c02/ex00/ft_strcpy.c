/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:57:22 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/07/29 20:34:27 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i] != 0)
		dest[i] = src[i];
	dest[i] = 0;
	return (dest);
}
/*
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char *c = "Forty too\n";
	char a[50];

	ft_strcpy(a, c);
	printf("%s", a);
	return (0);
}
*/
