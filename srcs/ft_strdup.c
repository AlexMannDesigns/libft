/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:38:14 by amann             #+#    #+#             */
/*   Updated: 2021/11/01 15:29:43 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*res;

	len = 0;
	i = 0;
	while (src[len] != '\0')
		len++;
	res = (char *)malloc((len + 1) * sizeof(char));
	while (i <= len)
	{
		res[i] = src[i];
		i++;
	}
	return (*&res);
}
