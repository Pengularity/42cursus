/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:29:07 by marvin            #+#    #+#             */
/*   Updated: 2022/11/10 16:29:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d_ptr;
	unsigned const char	*s_ptr;
	size_t	i;

	d_ptr = dest;
	s_ptr = src;
	i = 0;
	if (!dest && !src)
		return (0);
	if (dest > src)
	{
		while(n-- > 0)
			d_ptr[n] = s_ptr[n];
	}
	else
	{
			while (i < n)
			{
				d_ptr[i] = s_ptr[i];
				i++;
			}
	}
	return (dest);
}
