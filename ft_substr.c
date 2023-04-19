/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaruangr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:50:10 by yaruangr          #+#    #+#             */
/*   Updated: 2023/04/19 21:25:04 by yaruangr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	unsigned int	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		str = (char *)malloc(sizeof(char));
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if (s_len - start <= len)
		len = s_len - start;
	str = (char *)malloc(sizeof(char) * len + 1);
	if ((str == NULL) || s[0] == '\0')
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
		str[i] = s[start + i];
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	char s1[] = "hello oh mg";
	printf("%s\n", ft_substr(s1, 2, 5));
}
ค้นหาตำแหน่ง start ใน *s แล้วคึนค่าตั้งแต่ตำแหน่งที่ start
ตามจำนวน len
*/
