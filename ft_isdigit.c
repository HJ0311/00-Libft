/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyehan <hyehan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 08:08:39 by hyehan            #+#    #+#             */
/*   Updated: 2025/02/19 16:57:26 by hyehan           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

// This function determines whether the argument is an numeric character.

#include "libft.h"

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}
