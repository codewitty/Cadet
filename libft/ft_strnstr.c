/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogomes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 11:58:37 by jogomes           #+#    #+#             */
/*   Updated: 2018/12/02 13:56:49 by jogomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	var;

	if (!(*s2))
		return ((char *)s1);
	var = ft_strn(s2);
	while (*s1 && var <= n--)
	{
		if (*s1 == *s2 && ft_memcmp(s1, s2, var) == 0)
			return ((char *)s1);
		s1++;
	}
	return ((void *)0);
}
