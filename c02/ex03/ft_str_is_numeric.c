/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:04:18 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/07/26 16:07:43 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	is_num;

	is_num = 1;
	while (*str != 0 && is_num)
	{
		if (!(*str >= '0' && *str <= '9'))
			is_num = 0;
		str++;
	}
	return (is_num);
}
/*
#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	printf("should print: 1\nresult: %d\n", ft_str_is_numeric("14190383"));
	printf("should print: 0\nresult: %d\n", ft_str_is_numeric("19030 "));
}
*/
