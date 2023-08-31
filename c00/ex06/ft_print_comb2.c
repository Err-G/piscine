/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:17:23 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/07/23 20:08:50 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	putdigit(int d)
{
	char	r;

	if (d > 9)
		return ;
	r = '0' + d;
	write(1, &r, 1);
}

void	put2digit(int d)
{
	putdigit(d / 10);
	putdigit(d % 10);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;	

	a = -1;
	while (++a <= 98)
	{
		b = a;
		while (++b <= 99)
		{
			put2digit(a);
			putchar(' ');
			put2digit(b);
			if (a < 98)
				write(1, ", ", 2);
		}
	}
}

/*
int	main(void)
{
	ft_print_comb2();
}
*/
