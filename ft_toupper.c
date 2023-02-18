/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaruangr < yaruangr@student.42bangkok.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 21:45:12 by yaruangr          #+#    #+#             */
/*   Updated: 2023/02/18 00:01:00 by yaruangr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"
#include    <stdio.h>

int    ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (0);
}

int main(void)
{
    int i;
    for (i = 0; i <= 127; i++)
        printf("ascii(%d) = %c\n",i, ft_toupper(i));
    //ft_toupper('a')
    return (0);
}
