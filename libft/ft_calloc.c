/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnguyen <wnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 20:53:45 by wnguyen           #+#    #+#             */
/*   Updated: 2022/11/23 15:17:47 by wnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*result;
	size_t	max;

	if (size == 0 || nmemb == 0)
		return (malloc(0));
	max = SIZE_MAX / size;
	if (max > nmemb)
		result = malloc(nmemb * size);
	else
		return (0);
	if (!result)
		return (0);
	ft_bzero(result, nmemb * size);
	return (result);
}
