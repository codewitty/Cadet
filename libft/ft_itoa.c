/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogomes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 09:53:09 by jogomes           #+#    #+#             */
/*   Updated: 2019/08/12 15:38:37 by jogomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*ptr;
	int		ctr;
	int		neg;
	int		size;
	int		index;

	ctr = 0;
	neg = 0;
	ptr = NULL;
	if (n == 0 || n == -2147483648)
	{
		ptr = ft_size_eval(n, ptr);
		return (ptr);
	}
	if (n < 0)
	{
		neg = 1;
		n = (n * -1);
		ctr++;
	}
	size = ft_strlen(n);
	index = 0;
	ptr = (char*)malloc((ctr + (size(n) + 1)) * sizeof(char));
	if (!ptr)
		return (NULL);
	if (nbr < 0 && (str[index] = '-'))
		size++;
	index = size - 1;
	while (nb >= 10)
	{
		ptr[index--] = (char)(nb % 10 + 48);
		nb /= 10;
	}
	ptr[index] = (char)(nb % 10 + 48);
	ptr[size] = '\0';
	return (ptr);
}
