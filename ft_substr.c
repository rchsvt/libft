/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavast <rchavast@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-26 12:10:20 by rchavast          #+#    #+#             */
/*   Updated: 2026-04-26 12:10:20 by rchavast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;

	s2 = malloc(len + 1);
	if (s2 == NULL)
		return (NULL);
	else if (start >= ft_strlen(s))
	{
		free(s2);
		return (ft_strdup(""));
	}
	else
	{
		s = s + start;
		ft_strlcpy(s2, s, len + 1);
	}
	return (s2);
}
