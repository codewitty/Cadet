/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogomes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 13:42:53 by jogomes           #+#    #+#             */
/*   Updated: 2018/12/19 13:45:46 by jogomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list * (*)(t_list *elem));
{
	if (lst != NULL && f != NULL)
		{
			newlist = f(lst);
			if (newlist != NULL && lst->next != NULL)
				newlist->next = ft_lstmap(lst->next, f);
			return (newlist);
		}
return (NULL);
}
