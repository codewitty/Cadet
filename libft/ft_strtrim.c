/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogomes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 11:58:37 by jogomes           #+#    #+#             */
/*   Updated: 2018/12/02 14:50:29 by jogomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	st;
	size_t	end;

	st = 0;
	if (s != NULL)
	{
		end = ft_strlen(s);
		while (s[st] != '\0' && ft_isspace(s[st]))
			st++;
		if (s[st] == '\0')
			return (ft_strdup(""));
		while (ft_isspace(s[end - 1]))
			end--;
		if (ft_strsub(s, st, end - st))
			return (ft_strsub(s, st, end - st));
		return (0);
	}
	return (NULL);
}
