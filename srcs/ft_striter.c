/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:05:54 by amann             #+#    #+#             */
/*   Updated: 2021/11/03 14:27:54 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void(*f)(char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(&s[i]);
		i++;
	}	
}