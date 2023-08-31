/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:36:08 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/08/03 20:18:34 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_contain_sign(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-'
			|| str[i] == '+')
			return (1);
		i++;
	}
	return (0);
}

int	ft_str_have_twice(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nb, char *base)
{
	unsigned int	num;
	unsigned int	bsize;

	bsize = ft_strlen(base);
	if (bsize <= 1 || ft_contain_sign(base)
		|| ft_str_have_twice(base))
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		num = -nb;
	}
	else
		num = nb;
	if (num >= bsize)
	{
		ft_putnbr_base(num / bsize, base);
	}
	ft_putchar(base[num % bsize]);
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
	printf("Warning, this function does not have nothing \
to be compared please follow the pdf!\n");
	if (argc == 3)
	{
		ft_putstr("result: ");
		ft_putnbr_base(atoi(argv[1]), argv[2]);
		ft_putstr("\n");
	}
	return (0);
}
*/
