/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 16:35:49 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/08/06 17:47:53 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

void	sort(char **arr, int n)
{
	int		i;
	int		j;
	char	*str;

	i = 1;
	while (i < n)
	{
		str = arr[i];
		j = i - 1;
		while (j >= 0 && ft_strcmp(arr[j], str) > 0)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = str;
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc <= 1)
		return (0);
	sort(&argv[1], argc - 1);
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}
