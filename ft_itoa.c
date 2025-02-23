/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyehan <hyehan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:24:04 by hyehan            #+#    #+#             */
/*   Updated: 2025/02/23 15:47:24 by hyehan           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

// This function converts a integer to string.

#include "libft.h"

int		cnt_len(long n);
void	convert(char *result, int len, long n);

char	*ft_itoa(int n)
{
	int		len;
	char	*result;

	len = cnt_len((long)n);
	result = ft_calloc(len + 1, sizeof(char));
	if (!result)
		return (NULL);
	convert(result, len, (long)n);
	return (result);
}

int	cnt_len(long n)
{
	int	len;

	len = 0;
	if (n == 0)
		len++;
	else if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

void	convert(char *result, int len, long n)
{
	result[len--] = '\0';
	if (n == 0)
		result[0] = '0';
	else if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		result[len] = (n % 10) + '0';
		n /= 10;
		len--;
	}
}
