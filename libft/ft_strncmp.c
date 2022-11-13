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
	unsigned char str1;
	unsigned char str2;

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
