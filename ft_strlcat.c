/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:46:58 by zihirri           #+#    #+#             */
/*   Updated: 2021/11/06 18:10:11 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	lds;
	size_t	k;
	size_t	lsr;

	lsr = 0;
	lds = 0;
	k = 0;
	while (src[lsr] != '\0')
		lsr++;
	while (dest[lds] != '\0')
		lds++;
	if (size <= lds)
		return (lsr + size);
	while (src[k] != '\0' && k + lds < size - 1)
	{
		dest[lds + k] = src[k];
		k++;
	}
	dest[lds + k] = '\0';
	return (lds + lsr);
}
