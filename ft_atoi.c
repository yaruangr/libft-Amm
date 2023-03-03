/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaruangr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:56:21 by yaruangr          #+#    #+#             */
/*   Updated: 2023/02/26 16:49:57 by yaruangr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include	"libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int	ft_atoi(const char *str)
{
	int i;
	int integer;
	int multiply;

	i = 0;
	integer = 0;
	multiply = 1;

	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		{
			i++;
		}
        while (str[i] == '-')
		{
			multiply = multiply * -1;
			i++;
		}
	while (str[i] >= '0' && str[i] <= '9')
        	{
            		integer = (integer * 10) + (str[i] - '0'); //ascii '4' = 52, '0' = 48
           		i++;
		}
	return (integer * multiply);
}

int	main(void)
{
	const char str[] = "   -428ABC";

	printf ("%d\n", ft_atoi(str));
	printf ("%d\n", atoi(str));
	return (0);
}
