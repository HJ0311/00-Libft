/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyehan <hyehan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 19:13:11 by hyehan            #+#    #+#             */
/*   Updated: 2025/02/20 19:24:02 by hyehan           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

// This function convert string to integer.

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	long	num;

	sign = 1;
	num = 0;
	while ((9 <= *str && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str)
	{
		if ('0' <= *str && *str <= '9')
			num = num * 10 + (*str - '0');
		else
			break ;
		str++;
	}
	return (sign * num);
}
