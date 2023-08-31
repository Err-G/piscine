/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 19:59:06 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/07/31 15:37:59 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_iscntrl(char c)
{
	return (c < ' ' || c > '~');
}

void	ft_chartohex(char c)
{
	char	*hex_base;

	hex_base = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex_base[(unsigned char)c / 16]);
	ft_putchar(hex_base[(unsigned char)c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_iscntrl(str[i]))
			ft_chartohex(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
/*
#include <stdio.h>
void	ft_putstr_non_printable(char *str);
int	main(void)
{
	char	c[178];
	
	for (unsigned int i = 0; i < 177; i++)
		c[i] = i + 1;
	c[177] = '\0';
	ft_putstr_non_printable(c);
}
*/
