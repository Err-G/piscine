/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:32:45 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/07/20 13:08:38 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z' + 1;
	while (c-- > 'a')
	{
		write(1, &c, 1);
	}
}

/*
int	main()
{
	ft_print_reverse_alphabet();
}
*/
