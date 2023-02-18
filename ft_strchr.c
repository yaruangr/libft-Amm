/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaruangr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:07:05 by yaruangr          #+#    #+#             */
/*   Updated: 2023/02/18 21:32:20 by yaruangr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
//#include	<stdio.h>

char ft_strchr(char *str, int c)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char str[] = " juikdfvcg";
	char c = 'd';
	printf ("%d\n", ft_strchr(str,c));
	return (0);
}*/
