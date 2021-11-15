/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:37:40 by amann             #+#    #+#             */
/*   Updated: 2021/11/15 17:06:59 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	if (!s)
		return (NULL);
	res = (char *) malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	if (start >= ft_strlen(s) || len > ft_strlen(s))
		return (res);
	i = 0;
	while (i < len)
	{
		res[i] = s[start + i];
		i++;
	}	
	res[i] = '\0';
	return (res);
}
