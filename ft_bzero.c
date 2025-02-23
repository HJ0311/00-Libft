/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyehan <hyehan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 09:13:41 by hyehan            #+#    #+#             */
/*   Updated: 2025/02/19 16:52:27 by hyehan           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

// This function initializes the values to NULL(=0) for a lenght of n.

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (n == 0)
		return ;
	ft_memset(s, 0, n);
}
