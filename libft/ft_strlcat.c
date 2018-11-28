/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogomes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 11:58:37 by jogomes           #+#    #+#             */
/*   Updated: 2018/11/12 14:20:03 by jogomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strlcat(char *s1, const char *s2, size_t size)
{
	size_t	j;
	size_t	k;

	j = 0;
	k = 0;
	while (dst[j] && j < size)
		j++;
	while ((src[k]) && ((j + k + 1) < size))
	{
		dst[j + k] = src[k];
		k++;
	}
	if (j != size)
		dst[j + k] = '\0';
	return (j + ft_strlen(src));

}
