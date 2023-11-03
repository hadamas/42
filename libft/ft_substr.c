/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahadama- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:14:49 by ahadama-          #+#    #+#             */
/*   Updated: 2023/11/03 15:54:58 by ahadama-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;

	if (ft_strlen(s) < start)
		return(ft_strdup(""));
	if (!(result = (char *)malloc(sizeof (char) * (len + 1))))
		return (NULL);
	ft_memcpy(result, s + start, len);
	result[len] = '\0';
	return(result);
}
