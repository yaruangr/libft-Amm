/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaruangr < yaruangr@student.42bangkok.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 20:27:06 by yaruangr          #+#    #+#             */
/*   Updated: 2023/03/06 21:41:51 by yaruangr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"
#include    <stdio.h>
#include    <string.h>

void    *ft_memset(void *str, int c, size_t n)
{
    unsigned char *s;
    
    s = str;
    ft_bzero(s, n);
    while (n--)
        *s++ = (unsigned char) c;
    return (str);
}

int main(void)
{
    char str[] = "Gogo";
    size_t i;
    
    i = sizeof(str);
    
    ft_memset(str, c, i);    
    printf ("%s\n", str);
    return (0);
}