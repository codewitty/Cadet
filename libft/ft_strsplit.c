/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogomes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 17:25:42 by jogomes           #+#    #+#             */
/*   Updated: 2018/12/19 12:54:18 by jogomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_cntwrd(char const *s, char c)
{
	unsigned int	i;
	int				cntr;

	i = 0;
	cntr = 0;
	
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			cntr++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (cntr);
}
static char			*ft_strndup(const char *s, size_t n)
{
	char			*str;

	str = (char *)malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);
	str = ft_strncpy(str, s, n);
	str[n] = '\0';
	return (str);
}
char				**ft_strsplit(char const *s, char c)
{
	int				i;
	int				j;
	int				k;
	char			**tab;

	i = 0;
	k = 0;
	tab = (char **)malloc(sizeof(char *) * (ft_cntwrd(s, c)) + 1);
	if (tab == NULL)
		return (NULL);
	/*We now go into our loop to split our given string. Our main loop will
	 * continue so long as we have not reached the end of our parameter string.
	 * Inside we have another loop to pass over all of the parameter c
	 * characters that exist. This will stop when we reach our first not c 
	 * character. We then set our variable j equal to the value of i at This
	 * point in our function. j will be used to point to the starting index
	 * position of our first word inside our string s. We then continue moving
	 * through string s so long as we don't come across our parameter c
	 * character. Once we do we move to our if statement. If i is greater than
	 * j, which it should be if there is a word we want, we will then place
	 * that word into our table index position 0 (which is currently the value
	 * of k). We do this using the ft_strndup function from above and we give it
	 * two parameters; Our paramter string s (but at the index position of j,
	 * the beginning of the word we want) and the size/length of the word which
	 * we find by subtracting the value of j from the value of i (the start and
	 * end index positions of our word). We then increment k to move to the
	 * next position in our table. We repeat the main while loop until we reach
	 * the end of our parameter string s. We finish by adding a terminating
	 * NULL to our table tab. We then return our finished table.*/
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			tab[k] = ft_strndup(s + j, i - j);
			k++;
		}
	}
	tab[k] = NULL;
	return (tab);
char	**ft_strsplit(const char *s, char c)
{
	unsigned int i;
