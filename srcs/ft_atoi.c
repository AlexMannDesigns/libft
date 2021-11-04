/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:48:07 by amann             #+#    #+#             */
/*   Updated: 2021/11/04 18:57:34 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '-' && str[i + 1] > 47 && str[i + 1] < 58)
			sign = -1;
		else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\v' || str[i] == '\f' || str[i] == '\n')
			i++;
		else if (str[i] < 47 || str[i] > 58)
			return (0);
		if (str[i] > 47 && str[i] < 58)
		{
			res = (res * 10) + (str[i] - 48);
			if (str[i + 1] < 47 || str[i + 1] > 58)
				return (res * sign);	
		}
		i++;
	}
	return (res * sign);
}
