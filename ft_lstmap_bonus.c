/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyehan <hyehan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 17:57:23 by hyehan            #+#    #+#             */
/*   Updated: 2025/02/23 18:00:29 by hyehan           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

/* This function applies 'f' on the content of each node and copy new list.
'del' is used to delete content of node if needed. */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*new_node;
	void	*content;

	node = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&node, del);
			return (NULL);
		}
		ft_lstadd_back(&node, new_node);
		lst = lst->next;
	}
	new_node = NULL;
	return (node);
}
