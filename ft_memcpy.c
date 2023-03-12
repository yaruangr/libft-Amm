/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaruangr < yaruangr@student.42bangkok.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 21:49:39 by yaruangr          #+#    #+#             */
/*   Updated: 2023/03/12 22:00:19 by yaruangr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"
//#include    <stdio.h>
//#include    <string.h>

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char   *deststr;
    unsigned char   *srcstr;

    deststr = dest;
    srcstr = (unsigned char*)src;
        if (!dest && !src)
            return (NULL);
        while (n-- > 0)
        {
            *deststr++ = *srcstr++;
        }
    return (dest);
}

/*int main(void)
{
    char dest[] = "Happy birthday";
    const char src[] = "to you";
    size_t n;
    
    n = 8;

    ft_memcpy(dest, src, n);
    printf ("%s\n", dest);
    return (0);
}*/