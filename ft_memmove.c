/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaruangr < yaruangr@student.42bangkok.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 22:17:56 by yaruangr          #+#    #+#             */
/*   Updated: 2023/03/12 22:30:10 by yaruangr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"
#include    <stdio.h>
#include    <string.h>

void    *ft_memmove(void *str1, const void *str2, size_t n)
{
    
}

int main(void)
{
    unsigned char str1[] = "old";
    const char str2[] = "new";
    size_t n;

    n = '8';

    ft_memmove(str1, str2, n);
    printf ("%s\n", str1, str2);
    return (0);
}