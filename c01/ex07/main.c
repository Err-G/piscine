/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 21:31:14 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/07/24 22:23:58 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
