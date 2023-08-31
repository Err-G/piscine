/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:13:32 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/07/26 17:07:53 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	is_lowercase;

	is_lowercase = 1;
	while (*str != 0 && is_lowercase)
	{
		if (!(*str >= 'a' && *str <= 'z'))
			is_lowercase = 0;
		str++;
	}
	return (is_lowercase);
}
/*
#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	printf("should print: 1\nresult: %d\n", ft_str_is_lowercase("valor"));
	printf("should print: 0\nresult: %d\n", ft_str_is_lowercase("ValOr"));
}
*/
