/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:28:37 by amann             #+#    #+#             */
/*   Updated: 2021/11/15 12:22:08 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <string.h>
// #include <stdio.h>

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

// int	main()
// {
// 	char *s1 = "MZIRIBMZIRIBMZE123";
// 	char *s2 = "MZIRIBMZE";
// 	size_t max = strlen(s2);
// 	char *i1 = strnstr(s1, s2, max);
// 	char *i2 = ft_strnstr(s1, s2, max);
// 	char *s3 = "AAAAAAAAAAAAA";
// 	size_t max2 = strlen(s3);
// 	char *i3 = strnstr(s3, s3, max2);
// 	char *i4 = ft_strnstr(s3, s3, max2);

// 	printf("strnstr: %s || ft_strnstr: %s\n", i1, i2);
// 	printf("strnstr: %s || ft_strnstr: %s\n", i3, i4);
// 	return (0);
// }
