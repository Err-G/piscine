/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 21:12:24 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/07/25 20:28:31 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		tab[i] = tab[i] ^ tab[j];
		tab[j] = tab[i] ^ tab[j];
		tab[i] = tab[i] ^ tab[j];
		i++;
		j--;
	}
}
/*
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	print_line(int *a, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		printf("%d ", a[i]);
		i++;
	}
	putchar('\n');
}

int	main(void)
{
	int a[5] = { 1, 2, 3, 4, 5 };

	print_line(a, 5);
	ft_rev_int_tab(a, 5);
	print_line(a, 5);
}
*/
