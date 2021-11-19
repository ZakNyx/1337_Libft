/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:02:12 by zihirri           #+#    #+#             */
/*   Updated: 2021/11/10 16:02:27 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			j++;
		}
		i++;
	}
	return (j);
}

static char	*ft_strndup(const char	*s1, size_t	n)
{
	size_t	i;
	char	*scpy;

	scpy = (char *) malloc (sizeof(char) * n + 1);
	if (!scpy)
		return (NULL);
	i = 0;
	while (i < n)
	{
		scpy[i] = s1[i];
		i++;
	}
	scpy[i] = '\0';
	return (scpy);
}

static void	ft_fill_string(char const *s, char c, char **strs, int count)
{
	int	i;
	int	j;
	int	a;

	a = 0;
	i = 0;
	while (s[i] != '\0' && a < count)
	{
		if (s[i] != c)
		{
			j = i;
			while (s[j] != c && s[j] != '\0')
				j++;
			strs[a] = ft_strndup(&s[i], (j - i));
			i = j - 1;
			a++;
		}
		i++;
	}
	strs[a] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**strs;

	if (!s)
		return (NULL);
	count = ft_count_words(s, c);
	strs = (char **) malloc (sizeof(char **) * count + 1);
	if (!strs)
		return (NULL);
	ft_fill_string(s, c, strs, count);
	return (strs);
}
