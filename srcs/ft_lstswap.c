/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:21:17 by amann             #+#    #+#             */
/*   Updated: 2022/04/07 16:22:08 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstswap(t_list **list, t_list **head)
{
	t_list	*b;
	t_list	*c;
	t_list	*temp;

	b = (*list)->next;
	c = (*list)->next->next;
	(*list)->next->next = *list;
	(*list)->next = c;
	if (*list == *head)
	{
		*head = b;
		return ;
	}
	temp = *head;
	while ((*head)->next != *list)
		*head = (*head)->next;
	(*head)->next = b;
	*head = temp;
	*list = *head;
}
