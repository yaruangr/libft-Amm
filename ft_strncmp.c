/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaruangr < yaruangr@student.42bangkok.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 23:36:29 by yaruangr          #+#    #+#             */
/*   Updated: 2023/02/19 15:17:56 by yaruangr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"
//#include    <stdio.h>
int ft_strncmp(char *str1, char *str2, int c)
{
    int i;

    i = 0;
    while(str1[i] != '\0' && str2[i] != '\0')
    if(str1[i] == str2[i])
    {
        i++;
    }
    else if(str1[i] != str2[i])
    {
        return (str1 - str2);
    }
    return (str1 - str2);
}

/*int main(void)
{
    char str1[] = "cheese";
    char str2[] = "burger";
    int c = 'c';
    
    printf("%d\n", ft_strncmp(str1, str2, 'c'));
    return (0);
}*/
