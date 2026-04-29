/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavast <rchavast@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-22 17:17:57 by rchavast          #+#    #+#             */
/*   Updated: 2026-04-22 17:17:57 by rchavast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*str;
	unsigned char	*s;

	str = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n)
	{
		*str = (unsigned char)*s;
		s++;
		str++;
		n--;
	}
	return (dest);
}
