/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:55:57 by hece              #+#    #+#             */
/*   Updated: 2022/09/18 16:56:15 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ilk parametre, normal string, ikinci parametre fonksiyon pointeri.
// 23 -yeni str oluşturuluyor.
// 28 her char için fonksiyon uygulanıyor vesselam...

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	size_t	index;

	if (!s)
		return (NULL);
	new_str = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!new_str)
		return (NULL);
	index = 0;
	while (s[index])
	{
		new_str[index] = f(index, s[index]);
		index++;
	}
	new_str[index] = '\0';
	return (new_str);
}

/*#include <stdio.h>
char	funct(unsigned int a, char b)
{
	return (b+a);
}
int main()
{
	char	dizi[] = "aaaaaaaaaaaaaaaa";
	char	*new = ft_strmapi(dizi, funct);
	printf("%s",new);
}*/
