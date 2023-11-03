/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahadama- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:08:09 by ahadama-          #+#    #+#             */
/*   Updated: 2023/11/03 16:41:52 by ahadama-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*result;

	if (!(result = malloc(ft_strlen(s) + 1)))
		return (0);
	ft_memcpy(result, s, ft_strlen(s) + 1);
	return (result);
}
