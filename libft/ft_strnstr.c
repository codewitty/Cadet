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
	size_t	i;
	size_t	k;

	i = 0;
	while (i < n && s1[i] != '\0')
	{
		j = 0;
		while (i + k < n && s1[i + k] == s2[k] && s2[k] != '\0')
			k++;
		if (s2[k] == '\0')
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}
