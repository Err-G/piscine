/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:59:16 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/07/24 20:01:45 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int a;
	int b;

	a = 24;
	b = 42;
	ft_swap(&a, &b);

	printf("%d %d\n", a, b);
}
*/
