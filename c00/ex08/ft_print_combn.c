/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 21:18:28 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/07/26 17:51:12 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_comb(int *buf, int n)
{
	int		i;
	int		inc;

	i = 1;
	inc = 1;
	while (i < n)
	{
		if (buf[i - 1] >= buf[i])
			inc = 0;
		i++;
	}
	if (inc)
	{
		i = 0;
		while (i < n)
			ft_putchar(buf[i++] + '0');
		if (buf[0] < (10 - n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_combn(int n)
{
	int		i;
	int		buf[9];

	i = 0;
	while (i < n)
		buf[i++] = 0;
	if (n < 1 || n > 10)
		return ;
	while (buf[0] <= (10 - n)) 
	{
		print_comb(buf, n);
		i = n - 1;
		buf[i]++;
		while (i)
		{
			if (buf[i] > 9)
			{
				buf[i - 1]++;
				buf[i] = 0;
			}
			i--;
		}
	}
}

int	main(void)
{
	ft_print_combn(2);
}
