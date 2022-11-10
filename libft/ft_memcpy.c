/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */17 Bd Bessières, 75017 Paris
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:58:50 by marvin            #+#    #+#             */
/*   Updated: 2022/11/10 15:58:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char 		*d_ptr;
	const unsigned char	*s_ptr;
	size_t	i;

	d_ptr = dest;
	s_ptr = src;
	i = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		*d_ptr++ = *s_ptr++;
		i++;
	}
	return (dest);
}

