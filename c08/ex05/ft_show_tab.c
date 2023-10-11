/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:43:57 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/08/10 14:48:11 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
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
	if (num >= 10)
		ft_putnbr(num / 10);
	ft_putchar(num % 10);
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str)
	{
		ft_putstr(par->str);
		ft_putchar('\n');
		ft_putnbr(par->size);
		ft_putchar('\n');
		ft_putstr(par->copy);
		ft_putchar('\n');
		par++;
	}
}
