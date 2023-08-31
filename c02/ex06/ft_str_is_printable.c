/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:13:32 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/07/26 17:18:41 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	is_printable;

	is_printable = 1;
	while (*str != 0 && is_printable)
	{
		if (!(*str >= ' ' && *str <= '~'))
			is_printable = 0;
		str++;
	}
	return (is_printable);
}
/*
#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	printf("should print: 1\nresult: %d\n", ft_str_is_printable("!}{~"));
	printf("should print: 0\nresult: %d\n", ft_str_is_printable("Va\nr"));
}
*/
