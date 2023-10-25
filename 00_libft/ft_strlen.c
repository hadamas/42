/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahadama- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:32:47 by ahadama-          #+#    #+#             */
/*   Updated: 2023/10/18 16:32:28 by ahadama-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
int	ft_strlen(const char *s)
{
	size_t		len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}
/*
int	main(void)
{
	char *a = "alanis";
	printf("%d", ft_strlen(a));
}*/
