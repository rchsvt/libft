/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavast <rchavast@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-23 18:36:04 by rchavast          #+#    #+#             */
/*   Updated: 2026-04-23 18:36:04 by rchavast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*mem;
	char	*start;

	mem = malloc(ft_strlen(s1) + 1);
	if (mem == NULL)
		return (NULL);
	start = mem;
	while (*s1 != '\0')
	{
		*mem = *s1;
		s1++;
		mem++;
	}
	*mem = '\0';
	return (start);
}
