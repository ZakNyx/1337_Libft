/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:43:26 by zihirri           #+#    #+#             */
/*   Updated: 2021/11/16 17:05:26 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	fill_string(char const *s, char *sub, unsigned int st, size_t l)
{
	size_t	i;
	size_t	a;

	i = 0;
	a = 0;
	while (s[i] != '\0')
	{
		if (i >= st && a < l)
		{
			sub[a] = s[i];
			a++;
		}
		i++;
	}
	sub[a] = '\0';
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	b;

	b = len + 1;
	if (!s)
		return (NULL);
	if (b > ft_strlen(s))
		b = ft_strlen(s);
	sub = (char *) malloc (sizeof (char) * b);
	if (!sub)
		return (NULL);
	fill_string(s, sub, start, len);
	return (sub);
}
