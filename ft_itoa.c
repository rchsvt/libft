/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavast <rchavast@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-29 14:12:00 by rchavast          #+#    #+#             */
/*   Updated: 2026-04-29 14:12:00 by rchavast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(long nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = -nb;
		i++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*tab;

	nb = n;
	len = ft_intlen(nb);
	tab = malloc(len + 1);
	if (tab == NULL)
		return (NULL);
	tab[len] = '\0';
	if (n == 0)
		return (tab[0] = '0', tab);
	if (nb < 0)
	{
		tab[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		tab[len - 1] = nb % 10 + '0';
		len--;
		nb = nb / 10;
	}
	return (tab);
}
