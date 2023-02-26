/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaruangr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 15:22:30 by yaruangr          #+#    #+#             */
/*   Updated: 2023/02/26 14:32:57 by yaruangr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

char	ft_strnstr (const char *big, const char *little, size_t len)
{
    size_t	i;
    size_t	j;

	i = 0;
	j = 0;

    if (big != NULL && little != NULL)
	{
			i++;
	}
    if (little != NULL && little[0] != '\0')
	{
        return (big);
	}
    i = 0;
    while (big[i] && i < len)
    {
        j = 0;
        while (big[i + j] && little[j] && i + j < len && big[i + j] == little[j])
            j++;
        if (!little[j])
            return (big + i);
        i++;
    }
    return (0);
}

int main(void)
{
    const char *big = "Apple Papaya";
    const char *little = "p";

    printf("%s\n", ft_strnstr(big, little, 4));
	return (0);
}
