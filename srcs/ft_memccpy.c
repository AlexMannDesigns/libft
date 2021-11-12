/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:25:33 by amann             #+#    #+#             */
/*   Updated: 2021/11/12 12:55:02 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	stop;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	stop = (unsigned char) c;
	if (n <= 0)
		return (NULL);
	while (n > 0 && *s != stop)
	{
		*d++ = *s++;
		n--;
	}
	if (*s == stop)
	{
		*d++ = *s++;
		return (d);
	}
	else
		return (NULL);
}
