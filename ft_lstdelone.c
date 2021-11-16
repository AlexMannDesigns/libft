/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:03:56 by amann             #+#    #+#             */
/*   Updated: 2021/11/16 15:08:18 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	delete_func(void *content, size_t content_size)
{
	free(content);
	free(content_size);
}

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;

	del(*alst.content, *alst.content_size);
	while (*alst->next != NULL)
	{
		if (*alst->next->content)
		{
			tmp = *alst->next;
			*alst->next = *alst->next->next;
			free(tmp);
		}
		else
			*alst = *alst->next;
	}
}