/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogomes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 11:58:37 by jogomes           #+#    #+#             */
/*   Updated: 2018/11/12 14:20:03 by jogomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	size_t		i;
	unsigned char	*src1;
	unsigned char	*dst1;

	src1 = (unsigned char *)src;
	dst1 = (unsigned char *)dst;
	i = 0;
	while (i < len)
	{
		dst1[i] = src1[i];
		if (src[i] == (unsigned char)c)
			return (dst1[i+1]);
		i++;
	}
	return (NULL);
}
