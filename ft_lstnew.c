/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:02:52 by amann             #+#    #+#             */
/*   Updated: 2021/11/11 17:57:19 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *tmp;

	tmp = malloc(content_size);
	if (!tmp)
		return (NULL);
	tmp->content = (void *)content;
	if (content)
		tmp->content_size = content_size;
	else
		tmp->content_size = 0;
	tmp->next = NULL;
	return (tmp);
}

void	delete_func(void *content, size_t content_size)
{
	free(content);
	free(content_size);
}

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;

	del(*alst->content, *alst->content_size);
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

int	main(void)
{
	t_list	*hello;
	t_list	*null_test;
	char *str = "hello world!";
	hello = ft_lstnew(str, strlen(str));
	null_test = ft_lstnew(NULL, 12);
	printf("%s", hello->content);
	printf("%zu\n", null_test->content_size);
}
