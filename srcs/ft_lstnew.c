/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:18:47 by amann             #+#    #+#             */
/*   Updated: 2021/11/19 11:43:58 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_list
{
	void *content;
	size_t content_size;
	struct s_list *next;
} t_list;

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *) src;
	d = (unsigned char *) dest;
	if (!d && !s && n > 0)
		return (NULL);
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}

void ft_putstr(t_list *elem)
{
	char *str;

	str = elem->content;
	if (str)
	{
		printf("%s\n", str);
	}
	else
		printf("NULL\n");
}

t_list *ft_lstnew(void const *content, size_t content_size)
{
	t_list *tmp;

	tmp = (t_list *)malloc(sizeof(t_list) * content_size);
	if (!tmp)
		return (NULL);	
	if (content)
	{
		tmp->content = malloc(sizeof(content) * content_size);
		if (!tmp->content)
		{
			free(tmp);
			return NULL;
		}
		ft_memcpy(tmp->content, content, content_size);
		tmp->content_size = content_size;
	}
	else
	{
		tmp->content = (void *)content;
		tmp->content_size = 0;
	}
	tmp->next = NULL;
	return (tmp);
}

void ft_lstadd(t_list **alst, t_list *new)
{
	new->next = *alst;
}

void ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	while (lst)
	{
		f(lst);
		lst = lst->next;
	}
}

void delete_func(void *content, size_t content_size)
{
	free(content);
}

//take node's pointer address, free memory of content using del function
//the free the node's memory using free()
//do not free memory of next
//pointer to the node must be set to null (quite like ft_memdel)
void ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (!(*alst))
		return ;
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	//find the pointer to this node and then set it to NULL

	// (*alst)->next = NULL;
}

int main(void)
{
	t_list *one;
	t_list *two;
	t_list *three;
	t_list *four;
	t_list *five;
	t_list *null_test;
	char *str = "one";
	char *str2 = "two";
	char *str3 = "three";
	char *str4 = "four";
	char *str5 = "five";
	one = ft_lstnew((char *)str, strlen(str));
	two = ft_lstnew((char *)str2, strlen(str2));
	three = ft_lstnew((char *)str3, strlen(str3));
	four = ft_lstnew((char *)str4, strlen(str4));
	five = ft_lstnew((char *)str5, strlen(str5));
	//null_test = ft_lstnew((char *)str3, strlen(str3));
	//null_test = ft_lstnew(NULL, 12);
	// printf("%zu\n", null_test->content_size);
	// printf("%s\n", hello->content);
	ft_lstadd(&five, four);
	ft_lstadd(&four, three);
	ft_lstadd(&three, two);
	ft_lstadd(&two, one);
	//printf("test\n");
	ft_lstiter(one, ft_putstr);
	ft_lstdelone(&five, delete_func);
	ft_lstiter(one, ft_putstr);
}