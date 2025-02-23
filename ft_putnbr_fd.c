/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyehan <hyehan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 16:15:41 by hyehan            #+#    #+#             */
/*   Updated: 2025/02/23 16:40:24 by hyehan           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

// This function outpus the integer 'n'.

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = (long)n;
	if (n < 0)
	{
		n *= -1;
		ft_putchar_fd('-', fd);
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd('0' + n % 10, fd);
	}
	else
		ft_putchar_fd('0' + n % 10, fd);
}
