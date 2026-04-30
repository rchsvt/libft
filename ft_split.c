/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavast <rchavast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:16:59 by rchavast          #+#    #+#             */
/*   Updated: 2026/05/01 00:56:53 by rchavast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_sep(char c1, char c2)
{
	return (c1 == c2);
}

static size_t	count_mots(char *str, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (is_sep(str[i], c) == 0 && (i == 0 || is_sep(str[i - 1], c) != 0))
			count++;
		i++;
	}
	return (count);
}

static char	*copy_word(char *str, char c, size_t *i)
{
	size_t	j;
	char	*word;

	j = *i;
	while (str[j] && is_sep(str[j], c) == 0)
		j++;
	word = malloc(sizeof(char) * (j - *i + 1));
	if (!word)
		return (NULL);
	j = 0;
	while (str[*i] && is_sep(str[*i], c) == 0)
		word[j++] = str[(*i)++];
	word[j] = '\0';
	return (word);
}

static void	free_tab(char **tab, size_t k)
{
	while (k > 0)
		free(tab[--k]);
	free(tab);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	k;
	char	**tab;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (count_mots((char *)s, c) + 1));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		while (s[i] && is_sep(s[i], c) != 0)
			i++;
		if (!s[i])
			break ;
		tab[k] = copy_word((char *)s, c, &i);
		if (!tab[k++])
			return (free_tab(tab, k), NULL);
	}
	tab[k] = 0;
	return (tab);
}
