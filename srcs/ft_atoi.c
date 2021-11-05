/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:48:07 by amann             #+#    #+#             */
/*   Updated: 2021/11/05 12:34:20 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	white_space(const char *str, int i)
{
	if (str[i] == ' ' || str[i] == '\t' || str[i] == '\r')
		return (1);
	if (str[i] == '\v' || str[i] == '\f' || str[i] == '\n')
		return (1);
	return (0);
}

static int	solve_atoi(const char *str, int i, int res, int sign)
{
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{
			if (white_space(str, i))
				i++;
			else if (str[i] == '+' && str[i + 1] > 47 && str[i + 1] < 58)
				i++;
			else if (str[i] == '-' && str[i + 1] > 47 && str[i + 1] < 58)
				sign = -1;
			else
				return (0);
		}
		if (str[i] > 47 && str[i] < 58)
		{
			res = (res * 10) + (str[i] - 48);
			if (str[i + 1] < 48 || str[i + 1] > 57)
				return (res * sign);
		}
		i++;
	}
	return (res * sign);
}

int	ft_atoi(const char *str)
{
	return (solve_atoi(str, 0, 0, 1));
}
