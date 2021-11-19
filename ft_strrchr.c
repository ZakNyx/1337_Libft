/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:41:55 by zihirri           #+#    #+#             */
/*   Updated: 2021/11/06 11:48:10 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *haystack, int needle)
{
	int		i;
	char	*str;

	str = (char *)haystack;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (unsigned char)needle)
			return (str + i);
		i--;
	}
	return (NULL);
}
