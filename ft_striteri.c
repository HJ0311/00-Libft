/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyehan <hyehan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:56:51 by hyehan            #+#    #+#             */
/*   Updated: 2025/02/23 16:40:35 by hyehan           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

// This function applies the 'f' each character of the 's'.

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	idx;

	idx = 0;
	while (s[idx])
	{
		f(idx, &s[idx]);
		idx++;
	}
}
