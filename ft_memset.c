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

void    *ft_memset(void *str, int c, size_t n) //n คือ จำนวนไบต์ที่จะตั้งค่า
{
    size_t i; //ตั้งมาเพื่อนับจำนวนไบต์

	if (!str)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(unsigned char*)(str + i) = (unsigned char)c; //Str + i == Str[i] แต่ใช้ Str[i] ไม่ได้เพราะ strในฟังก์ชั่นนี้ไม่ใช่ตัวแปรประเภทchar
		i++;
	}
	return (str);
}

int main(void)
{
    char str[] = "Good morning teacher. How are you today?";
    size_t n;
    
    unsigned char c = 'x'
    n = 4;
    
    ft_memset(str, c, n);    
    printf ("%s\n", str);
    return (0);
}
