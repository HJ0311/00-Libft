/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyehan <hyehan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 17:18:43 by hyehan            #+#    #+#             */
/*   Updated: 2025/02/23 17:36:20 by hyehan           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

// This function count number of nodes.

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	cnt;

	cnt = 0;
	while (lst)
	{
		lst = lst->next;
		cnt++;
	}
	return (cnt);
}
