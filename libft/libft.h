/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogomes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 13:19:41 by jogomes           #+#    #+#             */
/*   Updated: 2018/12/02 14:34:05 by jogomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

void	ft_putchar(char c);
int		ft_isdigit(int c);
int		ft_isupper(int c);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strchr(const char *s, int c);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	ft_bzero(void *b, size_t len);
char	*ft_memcpy(void *restrict dst, const void *restrict src, size_t len);
void	ft_putnbr(int n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
size_t	ft_strlcat(char *s1, const char *s2, size_t size);
void	*ft_memccpy(void *dst, const void *src, int c, size_t len);
char	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *src, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
int		ft_isascii(int c);
int		ft_isprint(int c);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
#endif
