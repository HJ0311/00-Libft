/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyehan <hyehan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 19:24:26 by hyehan            #+#    #+#             */
/*   Updated: 2025/02/20 20:06:08 by hyehan           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

// This function allocates size bytes of memory and filles zero value.

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;

	arr = (void *)malloc(size * count);
	if (!arr)
		return (NULL);
	ft_bzero(arr, size * count);
	return (arr);
}
