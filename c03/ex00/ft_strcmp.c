/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 21:08:57 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/08/02 22:38:47 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != 0)
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("should print: %d\n", strcmp(argv[1], argv[2]));
		printf("print result: %d\n", ft_strcmp(argv[1], argv[2]));
	}
}
*/
