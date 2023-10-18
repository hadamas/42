/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahadama- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:31:46 by ahadama-          #+#    #+#             */
/*   Updated: 2023/10/18 17:01:33 by ahadama-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void * src, size_t n)
{
	unsigned char	*ds;
	unsigned const char	*sr;

	if (!dest || !src)
		return (0);
	ds = dest;
	sr = src;

	while (n-- > 0)
		*ds++ = *sr++;
	return (ds);
}
