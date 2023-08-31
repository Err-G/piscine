/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 22:25:20 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/08/03 21:00:11 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	fsize;

	i = 0;
	fsize = ft_strlen(to_find);
	if (!str[i] && !to_find[i])
		return (str);
	while (str[i])
	{
		j = 0;
		while (to_find[j])
		{
			if (str[i + j] != to_find[j])
				break ;
			j++;
		}
		if (!to_find[j])
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("should print: %s\n", 	strstr(argv[1], argv[2]));
		printf("print result: %s\n", ft_strstr(argv[1], argv[2]));
	}
	return (0);
}
*/
