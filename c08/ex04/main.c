/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:07:50 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/08/10 14:09:53 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

int	main(int argc, char **argv)
{
	t_stock_str	*stock;

	if (argc > 1)
	{
		stock = ft_strs_to_tab(argc - 1, ++argv);
		while (stock->str)
		{
			printf("str: %s\n", stock->str);
			printf("copy: %s\n", stock->copy);
			printf("size: %d\n", stock->size);
			stock++;
			printf("\n");
		}
	}
	printf("\n");
	return (0);
}
