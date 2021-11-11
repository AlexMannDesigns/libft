/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:24:03 by amann             #+#    #+#             */
/*   Updated: 2021/11/10 18:40:12 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*positive_res_malloc(char *s, int len)
{
	char	*res;
	int		i;

	res = (char *) malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		res[i] = s[i];
		i++;
	}
	res[len] = '\0';
	return (res);
}

static char	*negative_res_malloc(char *s, int len)
{
	char	*res;
	int		i;

	res = (char *) malloc((len + 2) * sizeof(char));
	if (!res)
		return (NULL);
	res[0] = '-';
	i = 1;
	while (s[i - 1] != '\0')
	{
		res[i] = s[i - 1];
		i++;
	}	
	res[len + 1] = '\0';
	return (res);
}

static char	*itoa_recursion(char *dest, int n)
{
	if (n >= 10)
		dest = itoa_recursion(dest, n/10);
	*dest++ = 48 + (n % 10);
	return (dest);
}

char	*ft_itoa(int n)      
{
	char	s[20];
	char	*res;
	size_t	len;
	int		sign;

	sign = 1;
	if (n  < 0)
	{
		sign = -1;
		n = n * -1;
	}
	*itoa_recursion(s, n) = '\0';
	len = ft_strlen(s);
	if (sign == 1)
		res = positive_res_malloc(s, len);
	else
		res = negative_res_malloc(s, len);	
	return (res);
}

