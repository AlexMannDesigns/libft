/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:18:56 by amann             #+#    #+#             */
/*   Updated: 2021/11/12 17:09:35 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	if (c == '\0')
		return ((char *)(s + len));
	i = 0;
	while (i < len)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
