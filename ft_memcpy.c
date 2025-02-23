/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyehan <hyehan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:38:19 by hyehan            #+#    #+#             */
/*   Updated: 2025/02/19 17:05:58 by hyehan           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

// This function copies n bytes from memory area of src to memory area of dest.

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			idx;
	unsigned char	*d;
	unsigned char	*s;

	if (n == 0 || dest == src)
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	idx = 0;
	while (idx < n)
	{
		d[idx] = s[idx];
		idx++;
	}
	return (dest);
}
