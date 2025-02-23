/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyehan <hyehan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:44:12 by hyehan            #+#    #+#             */
/*   Updated: 2025/02/23 15:54:28 by hyehan           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

/* This function applies the 'f' each character of the 's'
and create new string. */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	int		idx;
	size_t	len;
	char	*result;

	idx = 0;
	len = ft_strlen(s);
	result = ft_calloc(len + 1, sizeof(char));
	if (!result)
		return (NULL);
	while (s[idx])
	{
		result[idx] = f(idx, s[idx]);
		idx++;
	}
	result[idx] = '\0';
	return (result);
}
