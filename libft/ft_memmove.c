/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnguyen <wnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:29:07 by marvin            #+#    #+#             */
/*   Updated: 2022/11/11 13:47:29 by wnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d_ptr;
	unsigned const char	*s_ptr;

	d_ptr = dest;
	s_ptr = src;
	if (!dest && !src)
		return (0);
	if (dest > src)
	{
		while (n-- > 0)
			*--d_ptr = *--s_ptr;
	}
	else
	{
		while (n-- > 0)
		{
			*d_ptr++ = *s_ptr++;
		}
	}
	return (dest);
}
