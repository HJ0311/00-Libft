/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyehan <hyehan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:48:59 by hyehan            #+#    #+#             */
/*   Updated: 2025/02/23 16:40:30 by hyehan           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

// This function locates occurrence of 'c' in the string 's'.

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	idx;

	idx = 0;
	while (s[idx])
	{
		if (s[idx] == (char)c)
			return ((char *)&s[idx]);
		idx++;
	}
	return (NULL);
}
