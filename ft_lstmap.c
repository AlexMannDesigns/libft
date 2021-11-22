/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:39:46 by amann             #+#    #+#             */
/*   Updated: 2021/11/22 18:15:02 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *mapped;
	t_list *next_map;

	if (!lst || !f)
		return (NULL);
	mapped = f(lst);
	if (lst->next)
	{
		next_map = ft_lstmap(lst->next, f);
		if (!next_map)
		{
			free(mapped);
			return (NULL);
		}
		lst->next = next_map;
	}
	return (mapped);
}
