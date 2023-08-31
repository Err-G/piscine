/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:58:10 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/07/27 12:20:35 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] + ('A' - 'a');
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char a[] = "forty two";
	printf("should print: FORTY TWO\n");
	printf("result: %s\n", ft_strupcase(a));
}
*/
