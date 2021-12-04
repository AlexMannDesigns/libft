/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:38:14 by amann             #+#    #+#             */
/*   Updated: 2021/12/04 16:32:25 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	int		i;
	char	*res;

	len = ft_strlen(s1);
	i = 0;
	res = (char *) malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (i <= len)
	{
		res[i] = s1[i];
		i++;
	}
	return (res);
}
