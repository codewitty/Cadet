/* ************************************************************************** *
l
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogomes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 09:53:09 by jogomes           #+#    #+#             */
/*   Updated: 2019/01/02 12:29:58 by jogomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
char		*ft_itoa(int n)
{
	char	*str;

		return (ft_strcpy(str, "-2147483648"));
	
		str[0] = '-';
		str = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
		str[0] = n + '0';
		str[1] = '\0';
	}
	return (str);
}

