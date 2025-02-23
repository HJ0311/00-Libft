/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyehan <hyehan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 07:55:54 by hyehan            #+#    #+#             */
/*   Updated: 2025/02/21 09:05:15 by hyehan           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

/* This function allocate for copy string of s1
that removed the character in the set. */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*result;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	result = ft_calloc(sizeof(char), end - start + 1);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1 + start, end - start + 1);
	return (result);
}
