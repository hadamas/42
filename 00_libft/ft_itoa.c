/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahadama- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:53:16 by ahadama-          #+#    #+#             */
/*   Updated: 2023/10/27 14:40:11 by ahadama-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digits(int n)
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

static char	*write_nbr(int n)
{
	char	*str;

	if (n < 0)
		*str++ = '-';
	
	
}

char	*ft_itoa(int n)
{
	
			
}
