/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:02:46 by ngordobi          #+#    #+#             */
/*   Updated: 2024/01/29 14:50:48 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_lst;
	t_list	*l;

	if (!lst || !f || !del)
		return (0);
	n_lst = ft_lstnew(f(lst->content));
	if (!n_lst)
		return (0);
	l = n_lst;
	lst = lst->next;
	while (lst)
	{
		n_lst->next = ft_lstnew(f(lst->content));
		if (!n_lst->next)
		{
			ft_lstclear(&l, del);
			return (0);
		}
		n_lst = n_lst->next;
		lst = lst->next;
	}
	n_lst->next = 0;
	return (l);
}
