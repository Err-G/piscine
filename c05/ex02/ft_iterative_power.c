/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:17:18 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/08/07 13:26:44 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = nb;
	while (power > 1)
	{
		nb *= i;
		power--;
	}
	return (nb);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	printf("%d\n", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
*/
