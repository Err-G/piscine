/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:36:08 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/08/06 18:13:58 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	num;

	if (nb < 0)
	{
		ft_putchar('-');
		num = -nb;
	}
	else
		num = nb;
	if (num > 9)
		ft_putnbr(num / 10);
	ft_putchar((num % 10) + '0');
}
/*
#include <stdlib.h>
#include <stdio.h>
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("should print: %d\n", atoi(argv[1]));
		ft_putstr("result print: ");
		ft_putnbr(atoi(argv[1]));
		ft_putstr("\n");
	}
	return (0);
}
*/
