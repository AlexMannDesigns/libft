/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:28:37 by amann             #+#    #+#             */
/*   Updated: 2021/11/15 13:37:11 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	n_len;

	i = 0;
	n_len = strlen(needle);
	if (n_len == 0)
		return ((char *)haystack);
	while (*(haystack + i) != '\0' && (i + n_len) <= n)
	{
		if (strncmp((haystack + i), needle, n_len) == 0)
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
