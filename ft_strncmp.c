/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaruangr < yaruangr@student.42bangkok.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 23:36:29 by yaruangr          #+#    #+#             */
/*   Updated: 2023/02/25 16:23:00 by yaruangr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t c)
{
	int	i;

	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] == str2[i])
		{
			i++;
		}
		else if (str1[i] != str2[i] && c != i)
		{
			return (str1[i] - str2[i]);
		}
	}
	return (str1[i] - str2[i]);
}

/*int main(void)
{
    char str1[] = "ii";
	char str2[] = "ee";
	size_t c = 2;
    
	printf("%d\n", ft_strncmp(str1, str2, c));
	return (0);
}
*/
