/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strteri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahadama- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:36:23 by ahadama-          #+#    #+#             */
/*   Updated: 2023/10/31 14:37:43 by ahadama-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*new_str(int n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (0);
	return (str);
}
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	char	*result;
	int	len;

	if (!s)
		return (NULL);
	str = new_str(ft_strlen(s));
	len = 0;
	result = str;
	while (*s)
		*str++ = f(len++, *s++);
	*str = '\0';
	return (result);
}
