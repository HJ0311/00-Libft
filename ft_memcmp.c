/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyehan <hyehan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:29:36 by hyehan            #+#    #+#             */
/*   Updated: 2025/02/20 18:35:13 by hyehan           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

// This function compare the contents of two memory blocks byte by byte.

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				idx;
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	idx = 0;
	while (idx < n)
	{
		if (str1[idx] != str2[idx])
			return (str1[idx] - str2[idx]);
		idx++;
	}
	return (0);
}
