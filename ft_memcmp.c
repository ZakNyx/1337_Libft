/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:10:29 by zihirri           #+#    #+#             */
/*   Updated: 2021/11/09 17:03:47 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t len)
{
	size_t	i;

	i = 0;
	while (len > i)
	{
		if (((unsigned const char *)str1)[i]
				!= ((unsigned const char *)str2)[i])
			return (((unsigned const char *)str1)[i]
					- ((unsigned const char *)str2)[i]);
		i++;
	}
	return (0);
}
