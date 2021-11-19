/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:59:38 by zihirri           #+#    #+#             */
/*   Updated: 2021/11/11 22:06:38 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
void    plus(void *to)
{
    int i;
    char *r;
    r = (char *)to;

    i = 0;
    while (r[i] != '\0')
    {
        r[i] = r[i] - 32;
        i++;
    }
}

int main(void)
{
    t_list *str;

    char i[]= "jghg";
    char i1[]= "a";
    char i2[]= "bc";
    char i3[]= "ert";

    str = ft_lstnew(i);
    ft_lstadd_back(&str,ft_lstnew(i1));
    ft_lstadd_back(&str,ft_lstnew(i2));
    ft_lstadd_back(&str,ft_lstnew(i3));
    ft_lstiter(str,plus);
    printf("%s",(char *)str ->content);
}