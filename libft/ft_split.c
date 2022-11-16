/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnguyen <wnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:35:54 by wnguyen           #+#    #+#             */
/*   Updated: 2022/11/16 18:08:28 by wnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordlen(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s++ != c)
		len++;
	return (len);
}

static size_t	ft_count_word(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s != c && *s)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static void	ft_free(char **s, int i)
{
	while (i-- > 0)
		free (s[i]);
	free (s);
}

static char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*result;

	result = (char *)malloc(sizeof(char) * (n + 1));
	if (!result)
		return (0);
	i = 0;
	while (i < n)
	{
		result[i] = s[i];
		i++;
	}
	result[i] = 0;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	size_t	wordlen;
	size_t	count;
	size_t	i;
	char	**result;

	count = ft_count_word(s, c);
	i = 0;
	result = (char **)malloc(sizeof(char *) * (count + 1));
	if (!result)
		return (0);
	while (i < count)
	{
		while (*s && *s == c)
			s++;
		wordlen = ft_wordlen(s, c);
		if (!(result[i] = ft_strndup(s, wordlen)))
		{
			ft_free(result, i);
			return (0);
		}
		s += wordlen;
		i++;
	}
	result[count] = '\0';
	return (result);
}
