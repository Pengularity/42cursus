/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnguyen <wnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:25:24 by marvin            #+#    #+#             */
/*   Updated: 2022/11/11 13:46:00 by wnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char p1;
	unsigned char p2;

	p1 = *(unsigned char *)s1;
	p2 = *(unsigned char *)s2;
	while (n-- > 0)
	{
		if (p1 != p2)
			return (p1 - p2);
		if (p1 == '\0')
			return (0);
		p1++;
		p2++;
	}
	return (0);
}
