/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahadama- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:04:26 by ahadama-          #+#    #+#             */
/*   Updated: 2023/10/24 11:23:58 by ahadama-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

#include <stdlib.h>
#include <unistd.h>

/*
 * Functions Part1
*/

/* Type Int */
int     isalpha(int c);
int	isdigit(int c);
int	isalnum(int c);
int	isascii(int c);
int	isprint(int c);
int	toupper(int c);
int	tolower(int c);


/* String */
size_t	strlen(const char *s);
size_t  strlcpy(char *dst, const char *src, size_t size);
size_t  strlcat(char *dst, const char *src, size_t size);
char	*strchr(const char *s, int c);
char	*strrchr(const char *s, int c);
int	strncmp(const char *s1, const char *s2, size_t n);
char	*strnstr(const char *big, const char *little, size_t len);
int	atoi(const char *nptr);
char	*strdup(const char *s);

/* Memory Allocation */
void	*memset(void *s, int c, size_t n);
void	bzero(void *s, size_t n);
void	*memcpy(void *dest, const void *src, size_t n);
void	*memmove(void *dest, const void *src, size_t n);
void    *memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n)
void    *ft_calloc(size_t nmemb, size_t size)



/* 
 * Functions Part2
 */

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
