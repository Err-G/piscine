/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:04:57 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/08/09 02:59:23 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (0);
	arr = malloc(sizeof(int) * (max - min));
	if (!arr) 
		return (0);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	int	min = atoi(argv[1]);
	int	max = atoi(argv[2]);
	int i = 0;
	int *r = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d\n", r[i]);
		i++;
	}
	free(r);
	return (0);
}
*/
