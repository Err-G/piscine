/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:07:18 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/08/09 03:00:29 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	len = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = malloc(sizeof(int) * len);
	if (!*range)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (len);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	int *val;
	int	len;
	int	i;

	if (argc != 3)
		return (1);
	i = 0;
	len = ft_ultimate_range(&val, atoi(argv[1]), atoi(argv[2]));
	printf("size: %d\n", len);
	while (i < len)
	{
		printf("%d\n", val[i]);
		i++;
	}
	return (0);
}
*/
