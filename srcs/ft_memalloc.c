/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:02:52 by amann             #+#    #+#             */
/*   Updated: 2021/11/02 15:11:50 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*fresh_mem;

	fresh_mem = malloc(size);
	if (!fresh_mem)
		return (NULL);
	ft_bzero(fresh_mem, size);
	return (fresh_mem);
}
