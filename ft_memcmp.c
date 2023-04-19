/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaruangr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:41:42 by yaruangr          #+#    #+#             */
/*   Updated: 2023/04/19 19:44:53 by yaruangr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	i1 = (unsigned char *) str1;
	i2 = (unsigned char *) str2;
	while (n > 0)
	{
		if (*i1 != *i2)
			return (*i1 - *i2);
		i1++;
		i2++;
		n--;
	}
	return (0);
}

