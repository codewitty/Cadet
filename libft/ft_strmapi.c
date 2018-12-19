/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogomes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 12:53:19 by jogomes           #+#    #+#             */
/*   Updated: 2018/12/19 13:38:39 by jogomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	int		i;

	while (s[i])
	{
		i++;
	}
	p = (char *)malloc(sizeof(char) * (i + 1));
	while (s[i])
	{
		p[i] = f(i, &s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
