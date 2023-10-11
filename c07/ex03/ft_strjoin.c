/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 02:27:32 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/08/10 00:52:30 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

char	*ft_alloc_str(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		len;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * size + 1;
	if (size <= 0)
		len = 1;
	str = malloc(sizeof(char) * len);
	if (!str)
		return (0);
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	str = ft_alloc_str(size, strs, sep);
	i = -1;
	k = -1;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j])
			str[++k] = strs[i][j];
		j = -1;
		while (sep[++j] && i < size - 1)
			str[++k] = sep[j];
	}
	str[++k] = 0;
	return (str);
}
#include <stdio.h>
int	main(int argc, char **argv)
{
	char *str;
	if (argc <= 1)
		return (1);
	str = ft_strjoin(argc - 2, &argv[1], argv[argc - 1]);
	printf("%s\n", str);
	free(str);
	return (0);
}
