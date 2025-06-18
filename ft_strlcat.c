/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyehan <hyehan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:50:10 by hyehan            #+#    #+#             */
/*   Updated: 2025/02/19 18:00:30 by hyehan           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

// This function append string stc to the end of dest.

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	idx;
	size_t	dest_len;
	size_t	src_len;

	idx = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);

	if (destsize <= dest_len)
		return (destsize + src_len);

	while (src[idx] && (dest_len + idx + 1) < destsize)
	{
		dest[dest_len + idx] = src[idx];
		idx++;
	}
	dest[dest_len + idx] = '\0';
	return (dest_len + src_len);
}
