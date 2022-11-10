/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:36:16 by marvin            #+#    #+#             */
/*   Updated: 2022/11/10 17:36:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	slen;

	slen = ft_strlen(src);
	if (!dst || !src)
		return (0);
	if (size != 0)
	{
		ft_memcpy(dst, src, size -1);
		dst[size - 1] = '\0';
	}
	return (slen);
}
