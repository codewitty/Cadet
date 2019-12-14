/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogomes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 16:29:36 by jogomes           #+#    #+#             */
/*   Updated: 2018/12/19 13:05:07 by jogomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	while (i <= size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}

