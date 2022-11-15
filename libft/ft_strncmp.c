/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnguyen <wnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 21:09:36 by wnguyen           #+#    #+#             */
/*   Updated: 2022/11/15 16:08:08 by wnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	str1;
	unsigned char	str2;

	str1 = *(unsigned char *)s1;
	str2 = *(unsigned char *)s2;
	while (n-- > 0)
	{
		if (str1 != str2)
			return (str1 - str2);
		if (str1 == '\0')
			return (0);
		str1++;
		str2++;
	}
	return (0);
}
