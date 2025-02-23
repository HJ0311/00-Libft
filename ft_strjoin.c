/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyehan <hyehan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 07:50:39 by hyehan            #+#    #+#             */
/*   Updated: 2025/02/23 18:07:45 by hyehan           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

/* This function allocates and returns a new string, which is the result of the
concatenation of s1 and s2. */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*result;
	size_t	sum_len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	sum_len = ft_strlen(s1) + ft_strlen(s2);
	result = ft_calloc(sum_len + 1, sizeof(char));
	if (!result)
		return (NULL);
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		result[i] = s2[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
}
