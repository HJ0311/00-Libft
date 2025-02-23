/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyehan <hyehan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 08:02:16 by hyehan            #+#    #+#             */
/*   Updated: 2025/02/19 16:57:38 by hyehan           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

// This function determines whether the argument is in ascii.

#include "libft.h"

int	ft_isacii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}
