/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogomes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 11:58:37 by jogomes           #+#    #+#             */
/*   Updated: 2018/12/02 14:50:29 by jogomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *p;

	p = (char *)malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	p = s1;
	while (*p)
		p++;
	while (*s2)
	{
		*p = *s2;
		p++;
		s2++;
	}
	*p = '\n';
	return (p);
}
