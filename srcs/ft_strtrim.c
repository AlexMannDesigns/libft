/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:24:22 by amann             #+#    #+#             */
/*   Updated: 2021/11/15 16:26:32 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	st;
	size_t	end;
	size_t	i;
	char	*res;

	st = 0;
	while ((s[st] == ' ' || s[st] == '\n' || s[st] == '\t') && s[st] != '\0')
		st++;
	end = ft_strlen(s) - 1;
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
	{
		if (end == 0)
			return ("");
		end--;
	}
	res = (char *) malloc((end - st + 2) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (i++ < (end - st + 1))
	{
		res[i] = s[st + i];
	}
	res[i] = '\0';
	return (res);
}
