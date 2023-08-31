/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:45:49 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/08/03 20:26:16 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_alphanumeric(char c)
{
	int	result;

	result = 0;
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		result = 1;
	return (result);
}

int	ft_char_is_lowercase(char c)
{
	int	result;

	result = 0;
	if ((c >= 'a' && c <= 'z'))
		result = 1;
	return (result);
}

int	ft_char_is_uppercase(char c)
{
	int	result;

	result = 0;
	if ((c >= 'A' && c <= 'Z'))
		result = 1;
	return (result);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	first_letter;

	i = 0;
	first_letter = 1;
	while (str[i] != 0)
	{
		if (ft_char_is_alphanumeric(str[i]))
		{
			if (ft_char_is_lowercase(str[i]) && first_letter)
			{
				str[i] = str[i] + ('A' - 'a');
			}
			else if (ft_char_is_uppercase(str[i]) && !first_letter)
			{
				str[i] = str[i] - ('A' - 'a');
			}
			first_letter = 0;
		}
		else
			first_letter = 1;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char a[] = "Salut, Comment tu vas\
 ? 42mots quarante-deux; cinquante+et+un";
	printf("should print: Salut, Comment Tu Vas\
 ? 42mots Quarante-Deux; Cinquante+Et+Un\n");
	printf("result: %s\n", ft_strcapitalize(a));
}
*/
