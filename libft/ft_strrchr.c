/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnguyen <wnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:58:23 by marvin            #+#    #+#             */
/*   Updated: 2022/11/11 13:45:48 by wnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	slen;

	slen = ft_strlen(s);
	while (slen && *(s + slen) != c)
	{
		if ((s + slen) == c)
			return (char *)(s + slen);
		slen--;
	}
	return (0);
}
