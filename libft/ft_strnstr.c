/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnguyen <wnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 21:09:43 by wnguyen           #+#    #+#             */
/*   Updated: 2022/11/15 16:07:52 by wnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	llen;

	llen = ft_strlen(little);
	if (*little == '\0')
		return (big);
	while (*big && len-- >= llen)
	{
		if (ft_strncmp(big, little, llen) == 0)
			return (big);
		big++;
	}
	return (0);
}
