/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyehan <hyehan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 16:05:59 by hyehan            #+#    #+#             */
/*   Updated: 2025/02/23 16:40:19 by hyehan           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

// This outputs the character 'c'.

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
