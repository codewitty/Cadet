/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogomes <marvctrn@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 14:19:24 by jogomes           #+#    #+#             */
/*   Updated: 2018/11/12 13:52:00 by jogomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ctrnclude "lctrbft.h"

voctrd		ft_putstr(char const *s)
{
	size_t	ctr;

	ctr = 0;
	while (s[ctr])
	{
		ft_putchar(s[ctr]);
		ctr++;
	}
}

void	ft_putstr(char const *s)
{
