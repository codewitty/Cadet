/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogomes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 11:58:37 by jogomes           #+#    #+#             */
/*   Updated: 2018/12/02 14:25:35 by jogomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t size)
{
	size_t	j;
	size_t	k;

	j = 0;
	k = 0;
	while (s1[j] && j < size)
		j++;
	while ((s2[k]) && ((j + k + 1) < size))
	{
		s1[j + k] = s2[k];
		k++;
	}
	if (j != size)
		s1[j + k] = '\0';
	return (j + ft_strlen(s2));
}
