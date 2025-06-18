/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyehan <hyehan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 09:10:25 by hyehan            #+#    #+#             */
/*   Updated: 2025/02/23 18:07:30 by hyehan           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

// This function allocate for string obtained by splitting s using c.

#include "libft.h"

int	word_check(const char *s, char c);
int	word_cpy(const char *s, char c, char **result, int word_cnt);
int	word_allocate(char **result, char *start, int word_len);

char	**ft_split(const char *s, char c)
{
	int		word_cnt;
	char	**result;
	int		idx;

	idx = 0;
	word_cnt = word_check(s, c);
	result = ft_calloc(word_cnt + 1, sizeof(char *));
	if (!result)
		return (NULL);
	if (!word_cpy(s, c, result, word_cnt))
	{
		while (result[idx])
		{
			free(result[idx]);
			idx++;
		}
		free(result);
		return (NULL);
	}
	return (result);
}

int	word_check(const char *s, char c)
{
	int	word_cnt;
	int	in_word;

	word_cnt = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == c)
			in_word = 0;
		else if (*s != c && !in_word)
		{
			word_cnt++;
			in_word = 1;
		}
		s++;
	}
	return (word_cnt);
}

int	word_cpy(const char *s, char c, char **result, int word_cnt)
{
	char	*start;
	int		in_word;

	in_word = 0;
	while (*s)
	{
		if (*s == c)
		{
			if (in_word)
			{
				if (!word_allocate(result++, start, s - start))
					return (0);
				word_cnt--;
				in_word = 0;
			}
		}
		else if (!in_word)
		{
			start = (char *)s;
			in_word = 1;
		}
		s++;
	}
	if (in_word && word_cnt > 0)
	{
		if (!word_allocate(result, start, s - start))
			return (0);
	}
	return (1);
}


int	word_allocate(char **result, char *start, int word_len)
{
	int	idx;

	idx = 0;
	*result = ft_calloc(word_len + 1, sizeof(char));
	if (!*result)
		return (0);
	while (word_len > 0)
	{
		*(*result + idx) = *start;
		start++;
		idx++;
		word_len--;
	}
	*(*result + idx) = '\0';
	return (1);
}
