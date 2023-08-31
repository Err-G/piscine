/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:13:32 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/07/26 17:10:03 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	is_uppercase;

	is_uppercase = 1;
	while (*str != 0 && is_uppercase)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			is_uppercase = 0;
		str++;
	}
	return (is_uppercase);
}
/*
#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	printf("should print: 1\nresult: %d\n", ft_str_is_uppercase("VALOR"));
	printf("should print: 0\nresult: %d\n", ft_str_is_uppercase("Valor"));
}
*/
