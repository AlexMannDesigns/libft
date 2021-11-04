/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:38:14 by amann             #+#    #+#             */
/*   Updated: 2021/11/04 11:05:53 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*res;

	len = ft_strlen(src);
	i = 0;
	res = (char *) malloc((len + 1) * sizeof(char));
	if (!res)
		return NULL;
	while (i <= len)
	{
		res[i] = src[i];
		i++;
	}
	return (res);
}
