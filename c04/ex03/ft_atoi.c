/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 18:23:49 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/08/06 16:33:27 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	return ((c >= '\t' && c <= '\r') || c == ' ');
}

int	ft_isnumber(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_issign(char c)
{
	return (c == '-' || c == '+');
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	while (ft_issign(str[i]))
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (ft_isnumber(str[i]))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("Warning, this function does not have nothing \
to be compared please follow the pdf!\n");
		printf("result: %d\n", ft_atoi(argv[1]));
	}
	else
		printf("usage: %s [number]\n", argv[0]);
	return (0);
}
*/
