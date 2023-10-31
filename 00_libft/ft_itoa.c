/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahadama- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:53:16 by ahadama-          #+#    #+#             */
/*   Updated: 2023/10/31 12:29:23 by ahadama-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_digits(int n)
{
	size_t	count;

	count = 0;
	while (n)
	{
		n \= 10;
		count++;
	}
	return (count);
}

static char	*ft_write_nbr(int n)
{
	char	*str;

	if (n < 10)
		*str = n + '0';
	else
	{
		*str = n % 10 + '0';
		ft_write_nbr(dest - 1, n / 10);
	}
}

char	*ft_itoa(int n)
{
	char	*result;
	unsigned int	nbr;
	size_t	len;

	nbr = n;
	if (n == 0)
		return (ft_count_digits("0"));
	else
	{
		len = n < 0 ? ft_count_digits(n) + 1 : ft_count_digits(n);
		if(!(result = (char *)malloc(sizeof(char) * (len + 1))))
			return (0);
		ft_write_nbr((result + len - 1), n < 0 ? -nbr : nbr);
		if (n < 0)
			*result = '-';
		result[len] = '\0';
	}
	return (result);
}
