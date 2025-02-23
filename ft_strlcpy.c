/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyehan <hyehan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:07:47 by hyehan            #+#    #+#             */
/*   Updated: 2025/02/23 16:40:43 by hyehan           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

/* This function copies string src to string
dest by destsize -1 and termiante null. */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	idx;
	size_t	src_len;

	idx = 0;
	src_len = ft_strlen(src);
	if (destsize == 0)
		return (src_len);
	while (src[idx] && idx < destsize - 1)
	{
		dest[idx] = src[idx];
		idx++;
	}
	if (destsize != 0)
		dest[idx] = '\0';
	return (src_len);
}
