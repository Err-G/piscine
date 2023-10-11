/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:33:50 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/08/07 14:52:06 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i < nb && i <= 46340)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("%d\n", ft_sqrt(atoi(argv[1])));
	return (0);
}
*/
