/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:25:33 by amann             #+#    #+#             */
/*   Updated: 2021/11/03 13:02:47 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, void *src, int c, size_t n)
{
	char	*d;
	char	*s;

	d = (char *) dest;
	s = (char *) src;
	if (n <= 0)
		return (NULL);
	while (n > 0 && *s != c)
	{
		*d++ = *s++;
		n--;
	}
	if (*s == c)
	{
		*d++ = *s++;
		return (d);
	}
	else
		return (NULL);
}
