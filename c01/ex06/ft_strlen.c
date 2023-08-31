/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:56:06 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/07/24 23:05:53 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}
/*
#include <stdio.h>

int	ft_strlen(char *ptr);

int	main(void)
{
	printf("%d", ft_strlen("ola"));
}
*/
