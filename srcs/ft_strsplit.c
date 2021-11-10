/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:38:59 by amann             #+#    #+#             */
/*   Updated: 2021/11/10 15:29:20 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*res_malloc(char const *s, int pos, char c)
{
	int 	len;
	char	*str;
	int		i;

	len = 0;
	while (s[pos + len] != c)
		len++;
	str = (char *) malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[pos + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static char	**final_res_malloc(char **res)
{
	int		i;
	char	**final_res;

	i = 0;
	while (res[i] != NULL)
		i++;
	final_res = (char **) malloc((i + 1) * sizeof(char *));
	if (!final_res)
		return (NULL);
	i = 0;
	while (res[i] != NULL)
	{
		final_res[i] = res[i];
		i++;
	}
	final_res[i] = NULL;
	return (final_res);
}

char	**ft_strsplit(char const *s, char c)
{
	int		pos;
	int		i;
	char	**res;
	char	**final_res;

	pos = 0;
	i = 0;
	res = (char **) malloc((ft_strlen(s) + 1) * sizeof(char *));
	while (s[pos] != '\0')
	{
		if (s[pos] != c)
		{
			res[i] = res_malloc(s, pos, c);
			pos = pos + (ft_strlen(res[i]) - 1);	
			i++;
		}
		pos++;
	}
	res[i] = NULL;
	final_res = final_res_malloc(res);
	free(res);
	return (final_res);
}
