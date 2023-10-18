/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahadama- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:38:43 by ahadama-          #+#    #+#             */
/*   Updated: 2023/10/18 13:37:40 by ahadama-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <string.h>
#include <stdio.h>*/

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n-- > 0)
		*ptr++ = c;
	return (ptr);
}
/*int main()
{
    char str[50];
    char str1[50];
    
   strcpy(str,"This is string.h library function");
   puts(str);
   
   strcpy(str1,"This is string.h library functio1");
   puts(str1);

   memset(str,'$',7);
   puts(str);
   
   ft_memset(str1,'X',7);
   puts(str1);
  
   return(0);    
}*/
