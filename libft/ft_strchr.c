/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnguyen <wnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 21:08:17 by wnguyen           #+#    #+#             */
/*   Updated: 2022/11/16 20:37:20 by wnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != c)
	{
		if (*str == '\0')
			return (0);
		str++;
	}
	return (str);
}

/* code qui valident les tests

{
	size_t i;
	size_t len;

	i = -1;
	len = ft_strlen(s);
	while (++i < len + 1)
		if (s[i] == (char)c)
			return (((void *)&((char *)s)[i]));
	return (NULL);
}

*/
