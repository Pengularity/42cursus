/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnguyen <wnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:24:37 by wnguyen           #+#    #+#             */
/*   Updated: 2022/11/17 15:24:37 by wnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

static void	ft_allocate(char **tab, const char *s, char c)
{
	char		**pt;
	const char	*str;

	str = s;
	pt = tab;
	while (*str)
	{
		while (*s == c)
			s++;
		str = s;
		while (*str && *str != c)
			str++;
		if (*str == c || str > s)
		{
			*pt = ft_substr(s, 0, str - s);
			if (!*pt)
				return (ft_free(pt));
			s = str;
			++pt;
		}
	}
	*pt = '\0';
}

static int	ft_count_words(char const *s, char c)
{
	int	word_count;

	word_count = 0;
	while (*s)
	{
		while (*s == c)
			++s;
		if (*s)
			++word_count;
		while (*s && *s != c)
			++s;
	}
	return (word_count);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		size;

	if (!s)
		return (NULL);
	size = ft_count_words(s, c);
	strs = (char **)malloc(sizeof(char *) * (size + 1));
	if (!strs)
		return (0);
	ft_allocate(strs, s, c);
	return (strs);
}
