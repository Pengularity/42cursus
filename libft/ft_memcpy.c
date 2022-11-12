/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnguyen <wnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:58:50 by marvin            #+#    #+#             */
/*   Updated: 2022/11/11 13:47:51 by wnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char 		*d_ptr;
	const unsigned char	*s_ptr;

	d_ptr = dest;
	s_ptr = src;
	if (!dest && !src)
		return (0);
	while (n-- > 0)
	{
		*d_ptr++ = *s_ptr++;
	}
	return (dest);
}
