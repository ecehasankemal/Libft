/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:01:04 by hece              #+#    #+#             */
/*   Updated: 2022/09/18 17:01:25 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// s stringindeki her karakterin adresine tek tek f fonksiyonu uygulanir.
// vesselam...

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	index;

	index = 0;
	if (s != NULL)
	{
		while (index < ft_strlen(s))
		{
			f(index, &s[index]);
			index++;
		}
	}
}

/*#include <stdio.h>
void	funct(unsigned int a, char *b)
{
	*b = *b+a;
}
int main()
{
	char dizi[] = "aaaaaaaaaaaaaaaa";
	ft_striteri(dizi, funct);
	printf("%s",dizi);
}*/
