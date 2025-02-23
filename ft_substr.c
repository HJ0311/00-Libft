/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyehan <hyehan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 07:34:30 by hyehan            #+#    #+#             */
/*   Updated: 2025/02/23 16:38:27 by hyehan           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

/* This function allocatoes memory from start for len bytes and
create the substring. */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	idx;
	size_t	s_len;

	idx = 0;
	s_len = ft_strlen(s);
	if (s_len < start)
	{
		start = 0;
		len = 0;
	}
	if (s_len < len + start)
		len = s_len - start;
	substr = ft_calloc(len + 1, sizeof(char));
	if (!substr)
		return (NULL);
	while (idx + start < s_len && idx < len)
	{
		substr[idx] = s[start + idx];
		idx++;
	}
	substr[idx] = '\0';
	return (substr);
}
