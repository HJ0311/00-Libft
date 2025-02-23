/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyehan <hyehan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:54:38 by hyehan            #+#    #+#             */
/*   Updated: 2025/02/19 17:07:27 by hyehan           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

// This function copies n bytes from memory area of src to memory area of dest.

#include "libft.h"

static void	copy_str_back(unsigned char *dest, unsigned char *src, size_t len);

void	*ft_memove(void *dest, const void *src, size_t n)
{
	size_t			idx;
	unsigned char	*d;
	unsigned char	*s;

	idx = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest || !src)
		return (NULL);
	if (d > s)
		copy_str_back(d, s, n);
	else
	{
		while (idx < n)
		{
			d[idx] = s[idx];
			idx++;
		}
	}
	return (dest);
}

static void	copy_str_back(unsigned char *dest, unsigned char *src, size_t len)
{
	while (len > 0)
	{
		len--;
		dest[len] = src[len];
	}
}