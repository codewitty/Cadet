/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogomes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 14:19:24 by jogomes           #+#    #+#             */
/*   Updated: 2018/11/12 13:52:00 by jogomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function displays the string s to the standard output. We do this using
 * the parameter string s. We then do a simple loop stating that so long as we
 * to each index position of our string and place the character in that
 * position as a parameter for our ft_putchar function. The ft_putchar function
 * will put that character in the standard output and then we increment the i
 * variable to continue moving through the string. We do this until we reach
 * the terminating '\0' of the string.*/

#include "libft.h"

void		ft_putstr(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

void	ft_putstr(char const *s)
{
