/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:09:58 by amann             #+#    #+#             */
/*   Updated: 2021/12/07 18:11:05 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *temp;

	//check alst contains a value, if not, set it to new
	if (!(*alst))
	{
		*alst = new;
		return;
	}
	//save front of the list into a tmp variable
	temp = *alst;
	//iterate through list until next = NULL
	while ((*alst)->next != NULL)
		(*alst) = (*alst)->next;
	//set next pointer of last node to new node
	(*alst)->next = new;
	//reset list address to front node
	(*alst) = temp;
}
