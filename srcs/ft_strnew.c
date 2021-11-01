/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:44:25 by amann             #+#    #+#             */
/*   Updated: 2021/11/01 19:01:33 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new;
	size_t	i;

	new = (char *) malloc((size + 1) * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	while (i < (size + 1))
	{
		new[i] = '\0';
		i++;
	}
	return (new);
}
