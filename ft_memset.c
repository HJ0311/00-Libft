/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyehan <hyehan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 09:01:13 by hyehan            #+#    #+#             */
/*   Updated: 2025/02/19 17:06:18 by hyehan           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

// This function sets the memory to a specific value for a desired size.

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			idx;
	unsigned char	*str;

	str = (unsigned char *)b;
	idx = 0;
	while (idx < len)
	{
		str[idx] = (unsigned char)c;
		idx++;
	}
	return (b);
}
