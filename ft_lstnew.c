/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavast <rchavast@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-30 16:30:12 by rchavast          #+#    #+#             */
/*   Updated: 2026-04-30 16:30:12 by rchavast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	content = malloc(sizeof(t_list *));
	if (!content)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (content);
}
