/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyehan <hyehan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 07:16:31 by hyehan            #+#    #+#             */
/*   Updated: 2025/02/23 16:37:50 by hyehan           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

// This function allocates memory for copy of the string.

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		idx;
	size_t	len;
	char	*arr;

	idx = 0;
	len = ft_strlen(s1);
	arr = ft_calloc(len + 1, sizeof(char));
	if (!arr)
		return (NULL);
	while (s1[idx])
	{
		arr[idx] = s1[idx];
		idx++;
	}
	arr[idx] = '\0';
	return (arr);
}
