/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyehan <hyehan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 17:57:04 by hyehan            #+#    #+#             */
/*   Updated: 2025/02/20 18:27:35 by hyehan           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

/* This function searches for c within n bytes from the given pointer and
return the address of its location. */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			idx;
	unsigned char	*str;
	unsigned char	ch;

	idx = 0;
	str = (unsigned char *)s;
	ch = (unsigned char)c;

	while (idx < n)
	{
		if (str[idx] == ch)
			return (&str[idx]);
		idx++;
	}
	return (NULL);
}
