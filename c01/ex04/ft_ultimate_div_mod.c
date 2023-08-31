/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:24:50 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/07/24 20:46:26 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	f;
	int	s;

	f = *a;
	s = *b;
	*a = f / s;
	*b = f % s;
}
/*
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int a, b;
	
	a = 5;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("%d %d\n", a, b);
}
*/
