/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbetz <rbetz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:15:33 by rbetz             #+#    #+#             */
/*   Updated: 2022/04/12 17:33:59 by rbetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newhead;
	t_list	*tmp;

	if (lst == NULL || f == NULL)
		return (NULL);
	newhead = ft_lstnew(f(lst->content));
	tmp = newhead;
	if (newhead->content == NULL)
	{
		free(newhead);
		return (NULL);
	}
	lst = lst->next;
	while (lst != NULL)
	{
		ft_lstadd_back(&newhead, ft_lstnew(f(lst->content)));
		tmp = tmp->next;
		lst = lst->next;
		if (tmp->content == NULL)
		{
			ft_lstclear(&newhead, del);
			free(newhead);
			return (NULL);
		}
	}
	return (newhead);
}
