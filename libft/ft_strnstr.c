/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 20:22:49 by marvin            #+#    #+#             */
/*   Updated: 2022/11/13 20:22:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	llen;

	llen = ft_strlen(little);
	if (*little == '\0')
		return (char *)big;
	while (*big && len-- >= llen)
	{
		if (ft_strncmp(big, little, llen) == 0)
			return (char *)big;
		big++;
	}
	return (0);
}
