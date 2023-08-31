/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 22:26:47 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/07/24 23:13:27 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 1;
		while (j < size)
		{
			if (tab[j] < tab[j - 1])
				ft_swap(&tab[j], &tab[j - 1]);
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

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
	int a[5] = { 1, 3, 5, 2, 4 };

	print_line(a, 5);
	ft_sort_int_tab(a, 5);
	print_line(a, 5);
}
*/
