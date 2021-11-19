/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:27:19 by zihirri           #+#    #+#             */
/*   Updated: 2021/11/16 17:01:28 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static short	ft_intlen(int n)
{
	short	cnt;

	if (n <= 0)
		cnt = 1;
	else
		cnt = 0;
	while (n != 0)
	{
		n = n / 10;
		cnt = cnt + 1;
	}
	return (cnt);
}

static char	*ft_strnew(size_t size)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * size + 1);
	if (str == 0)
		return (NULL);
	str[size] = '\0';
	ft_bzero(str, size);
	return (str);
}

char	*ft_itoa(int n)
{
	char	*res;
	short	len;
	short	i;
	short	sign;

	len = ft_intlen(n);
	res = ft_strnew(len);
	if (res == 0)
		return (NULL);
	i = 0;
	sign = 1;
	if (n == 0)
		res[i] = '0';
	if (n < 0)
	{
		res[i] = '-';
		sign *= -1;
	}
	while (n != 0)
	{
		res[len - 1] = (sign * (n % 10)) + 48;
		n = n / 10;
		len--;
	}
	return (res);
}
