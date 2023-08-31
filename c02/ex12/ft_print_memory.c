/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 12:47:49 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/08/07 12:43:44 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(char c)
{
	char	*hex_base;

	hex_base = "0123456789abcdef";
	ft_putchar(hex_base[(unsigned char)c / 16]);
	ft_putchar(hex_base[(unsigned char)c % 16]);
}

void	ft_print_addr(void *addr)
{
	char	hex_base;
	char	addr_c[16];
	long	addr_l;
	int		i;

	addr_l = (long)addr;
	hex_base = "0123456789abcdef";
	i = 0;
	while (addr_l > 0)
	{
		addr_c[i] = hex_base[addr_l % 16];
		addr_l /= 16;
		i++;
	}
	while (i < 15)
	{
		addr_c[i] = '0';
		i++;
	}
	while (--i >= 0)
		ft_putchar(addr_c[i]);
}

void	ft_print_line(void *addr, int size)
{
	char	*addr_c;
	int		sp_to_pointer;
	int		i;

	addr_c = (char *)addr;
	
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char				*c;
	unsigned int		i;
	unsigned int		ssize;

	i = 0;
	c = addr;
	while ((i * 16) < size || i < (size / 16))
	{
		if (i < (size / 16))
			ssize = 16;
		else
			ssize = size % 16;
		ft_print_addr((unsigned long long)&c[i * 16]);
		write(1, ":", 1);
		ft_print_data(&c[i * 16], ssize);
		write(1, "\n", 1);
		i++;
	}
	return (addr);
}

#include <string.h>
int	main(void)
{
	ft_print_memory(0, 16);
	return (0);
}
