/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:02:46 by ngordobi          #+#    #+#             */
/*   Updated: 2024/01/28 18:26:20 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l;

	if (!lst)
		return (0);
	l = malloc(ft_lstsize(lst) * sizeof(t_list));
	while (lst)
	{
		l = f(lst->content);
		lst = lst->next;
		l = l->next;
	}
	del(lst);
	return (l);
}
