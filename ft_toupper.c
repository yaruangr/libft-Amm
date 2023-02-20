/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaruangr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:27:31 by yaruangr          #+#    #+#             */
/*   Updated: 2023/02/18 20:52:50 by yaruangr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
//#include	<stdio.h>

int	ft_toupper(int c)
{
	if(c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

/*int	main(void)
{
	printf ("%c\n", ft_toupper('b'));
	return (0);
}*/
