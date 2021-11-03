/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:15:42 by amann             #+#    #+#             */
/*   Updated: 2021/11/03 16:25:33 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp;
	char	*d;
	size_t	i;

	temp = malloc(n);
	if (!temp)
		return (NULL);
	d = (char *) dest;
	i = 0;
	while (i < n)
	{
		temp[i] = *(char *)(src + i);
		i++;
	}
	while (n > 0)
	{
		*d++ = *temp++;
		n--;
	}	
	return (dest);
}
