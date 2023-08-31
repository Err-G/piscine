/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:23:12 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/08/03 16:35:44 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("should print: %s\n", argv[1]);
		ft_putstr("result print: ");
		ft_putstr(argv[1]);
		ft_putstr("\n");
	}
	return (0);
}
*/
