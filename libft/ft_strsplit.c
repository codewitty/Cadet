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
 * parameter) characters from the given string, always NULL terminating the
 * copied string.*/
static char			*ft_strndup(const char *s, size_t n)
{
	/*We start by creating a string variable that we will be allocating memory
	 * to and that we will be returning as the result of this function. We 
	 * allocate the memory for this string by using this function's parameter
	 * of n. We get this parameter from our ft_strsplit function. It is the 
	 * length of one of the words that we a splitting into a table. We add 1 to
	 * this in the malloc function to ensure space for a terminating '\0'. We
	 * then check to see if the memory allocation failed. If it did we will
	 * return NULL. If the allocation succeeded then we want to place our word
	 * into our fresh string str. We do this by using our previously made 
	 * ft_strncpy function. We give ft_strncpy our memory allocated 'fresh'
	 * string, the parameter string s (which is taken from ft_strsplit but has
	 * been put in the ft_strndup function at the index the word we want to 
	 * place into str will start from) and the size_t parameter n. We then make
	 * sure to add a terminating character to the end of our fresh string and
	 * then return it. */
	char			*str;

	str = (char *)malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);
	str = ft_strncpy(str, s, n);
	str[n] = '\0';
	return (str);
}
/*With the two previous functions made we are now ready to begin our real
 * function, ft_strsplit*/
char				**ft_strsplit(char const *s, char c)
{
	/*We start by creating three counter variables. We will use these three
	 * variables to pinpoint index positions inside our parameter string s. We
	 * also create a char variable **tab. This variable is for our table that
	 * will hold our split strings. We set the variables i and k to 0 and well
	 * then allocate memory for our table. This is where we use our ft_cntwrd
	 * function above, to figure out how much space we need to allocate for our
	 * table. If the allocation fails we return a NULL.*/
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
