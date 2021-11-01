/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:02:52 by amann             #+#    #+#             */
/*   Updated: 2021/11/01 19:02:32 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	char	*fresh_mem;

	i = 0;
	fresh_mem = malloc(size);
	if (!fresh_mem)
		return (NULL);
	while (i < size)
	{
		fresh_mem[i] = 0;
		i++;
	}
	return (fresh_mem);
}
