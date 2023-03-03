/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaruangr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:56:21 by yaruangr          #+#    #+#             */
/*   Updated: 2023/03/03 16:49:57 by yaruangr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdio.h>

int	ft_atoi(const char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
		if (str[i] >= 65 && str[i] <= 90)
		{
			i++;
		}
		else if (str[i] >= 97 && str[i] <= 122)
		{
			i++;
		}
		else
	return ();
}

int	main(void)
{
	const char str[] = "kitkat";

	printf ("%d\n", ft_atoi(str));
	return (0);
}
