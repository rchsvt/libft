/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavast <rchavast@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-28 23:01:27 by rchavast          #+#    #+#             */
/*   Updated: 2026-04-28 23:01:27 by rchavast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*resultat;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	resultat = malloc(ft_strlen(s) + 1);
	if (!resultat)
		return (NULL);
	while (s[i])
	{
		resultat[i] = f(i, s[i]);
		i++;
	}
	resultat[i] = '\0';
	return (resultat);
}
