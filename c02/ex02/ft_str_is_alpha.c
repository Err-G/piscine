/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:49:44 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/07/27 12:44:49 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	is_alpha;

	is_alpha = 1;
	while (*str != 0 && is_alpha)
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
			is_alpha = 0;
		str++;
	}
	return (is_alpha);
}
/*
#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	printf("should print: 1\nresult: %d\n", ft_str_is_alpha("AmInahHACasa"));
	printf("should print: 0\nresult: %d\n", ft_str_is_alpha("Eit1"));
}
*/
