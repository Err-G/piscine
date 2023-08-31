/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:18:54 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/08/04 22:15:43 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
#include <string.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("should print: %lu\n", strlen(argv[1]));
		printf("result print: %d\n", ft_strlen(argv[1]));
	}
	return (0);
}
*/
