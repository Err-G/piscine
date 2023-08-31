/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:58:10 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/07/27 12:43:35 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] - ('A' - 'a');
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char a[] = "FORTY TWO";
	printf("should print: forty two\n");
	printf("result: %s\n", ft_strlowcase(a));
}
*/
