/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 21:29:41 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/08/02 22:39:01 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != 0 && i < n)
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("should print: %d\n", strncmp(argv[1], argv[2], atoi(argv[3])));
		printf("print result: %d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	}
}
*/
