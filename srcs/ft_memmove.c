/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:15:42 by amann             #+#    #+#             */
/*   Updated: 2021/11/12 14:07:01 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;

	if (!src && !dest && n > 0)
		return (NULL);
	i = 0;
	if (src < dest)
	{
		while (i < n)
		{
			((unsigned char *)dest)[n - i - 1] = ((unsigned char *)src)[n - i - 1];
			i++;
		}
		return (dest);
	}
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}	
	return (dest);
}
