/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_teste.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahadama- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:51:41 by ahadama-          #+#    #+#             */
/*   Updated: 2023/10/24 10:31:33 by ahadama-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int     ft_atoi(const char *nptr)
{ 
        int     flag;
        int     result;

        result = 0;
        flag = 1;
        while (*nptr == '\t' || *nptr == 32)
        	nptr++;
        if (*nptr == '+' || *nptr == '-')
		if (*nptr++ == '-')
			flag *= -1;
        while (*nptr >= '0' && *nptr <= '9')
        {
                result *= 10;
                result += *nptr++ - '0';
        }
        return (result * flag);
}

int	main(void)
{
	char	*a = "  -1a00000i7";

	int original = atoi(a);
	int mine = ft_atoi(a);
	printf("Value test= %s\noriginal = %d\nmine = %d", a, original, mine);
}
