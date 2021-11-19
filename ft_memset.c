/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:19:36 by zihirri           #+#    #+#             */
/*   Updated: 2021/11/09 17:04:34 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	size_t			i;
	unsigned char	chr;
	char			*result;

	chr = value;
	result = pointer;
	i = 0;
	while (i < count)
	{
		result[i] = chr;
		i++;
	}
	return (pointer);
}
