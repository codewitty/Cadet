/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogomes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 11:58:37 by jogomes           #+#    #+#             */
/*   Updated: 2018/11/05 13:32:05 by jogomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memcpy(void *restrict dst, const void *restrict src, size_t len)
{
	size_t	i;
	char	*src1;

	src1 = src;
	dst1 = dst;
	i = 0;
	while (src1[i] && i < len)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst);
}
