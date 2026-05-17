/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavast <rchavast@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-28 17:49:53 by rchavast          #+#    #+#             */
/*   Updated: 2026-04-28 17:49:53 by rchavast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*last;
	unsigned char	ch;

	last = NULL;
	ch = (unsigned char)c;
	while (*s)
	{
		if ((unsigned char)*s == ch)
			last = (char *)s;
		s++;
	}
	if ((unsigned char)*s == ch)
		return ((char *)s);
	return (last);
}
