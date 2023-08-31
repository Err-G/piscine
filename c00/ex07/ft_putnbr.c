/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 23:46:41 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/07/24 20:35:38 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	putdigit(int d)
{
	char	c; 

	c = '0' + (d % 10);
	putchar(c);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		putchar('-');
		if (nb == -2147483648)
		{
			write(1, "2147483648", 10);
			return ;
		}
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	putdigit(nb);
}

/*
int	main(void)
{
	ft_putnbr(42);
}
*/
