/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:49:54 by amann             #+#    #+#             */
/*   Updated: 2021/11/15 11:54:42 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <string.h>
// #include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_dst = strlen(dst);
	len_src = strlen(src);
	if (len_dst > dstsize)
		return (len_src + dstsize);
	i = 0;
	while (src[i] != '\0' && (dstsize - len_dst - 1 - i) > 0)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	// if (dst[i] == '\0')
	// 	return (len_src);
	// else if (src[i] != '\0')
	// 	return (len_src + dstsize);
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}

// int	main(void)
// {
// 	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
// 	char buff1[0xF00] = "there is no stars in the sky"; 
// 	char buff2[0xF00] = "there is no stars in the sky";
// 	size_t max = strlen(str) + 4;
// 	size_t r1 = strlcat(buff1, str, max);
// 	size_t r2 = ft_strlcat(buff2, str, max);	
// 	printf("max = %zu dst_size = %zu\n", max, strlen("there is no stars in the sky"));
// 	printf("strlcat: %zu || ft_strlcat: %zu\n", r1, r2);
// 	printf("strlcat: %s \nft_strlcat: %s\n", buff1, buff2);

// 	char s1[4] = "";
// 	char s2[4] = "";
// 	printf("%lu\n", strlen("thx to ntoniolo for this test !"));

// 	size_t r3 = strlcat(s1, "thx to ntoniolo for this test !", 4);
// 	size_t r4 = ft_strlcat(s2, "thx to ntoniolo for this test !", 4);
// 	printf("strlcat: %zu || ft_strlcat: %zu\n", r3, r4);
// 	printf("strlcat: %s || ft_strlcat: %s\n", s1, s2);
// 	return (0);
// }
