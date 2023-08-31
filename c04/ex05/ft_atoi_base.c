/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 18:23:49 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/08/05 15:52:37 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function check if a character is valid on the base or not, it should re-
turn it's base index, if the character is found, otherwise return -1 error flag.
*/

int	ft_geti(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

/* This function checks if a base is valid or not, ignoring isspace(3) and the
invalid '+' & '-' characters, it checks for twiced characters too! It returns 
the base lenght. */

int	ft_atoi_base_len(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				return (0);
			j++;
		}
		if (base[i] == ' ' || base[i] == '\f' || base[i] == '\n'
			|| base[i] == '\r' || base[i] == '\t' || base[i] == '\v'
			|| base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	return (i);
}

/* This function is for sign evaluation, it should return the sign, the sign is
     1 positive or negative, based on the evaluation, it also should modify the
   index to the first character of the base. */

int	ft_sign_eval(char *str, int *i)
{
	int	sign;

	sign = 1;
	while (str[*i] == ' ' || str[*i] == '\f' || str[*i] == '\n'
		|| str[*i] == '\r' || str[*i] == '\t' || str[*i] == '\v')
		(*i)++;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			sign = -sign;
		(*i)++;
	}
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;
	int	len;

	result = 0;
	i = 0;
	len = ft_atoi_base_len(base);
	if (len > 1)
	{
		sign = ft_sign_eval(str, &i);
		while (ft_geti(str[i], base) != -1)
		{
			result = (result * len) + ft_geti(str[i], base);
			i++;
		}
		return (result * sign);
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("result: %d\n", ft_atoi_base(argv[1], argv[2]));
	}
	else
	{
		printf("Warning, this function does not have nothing \
to be compared please follow the pdf!\n");
		printf("usage: %s [base num] [base]\n", argv[0]);
	}
	return (0);
}
*/
