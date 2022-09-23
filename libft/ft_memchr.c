/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:46:04 by hece              #+#    #+#             */
/*   Updated: 2022/09/18 15:46:20 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_strchr ye çok benzer bir fonksiyondur
// aralarında küçük farklar vardır aldıgı parametreler gibi
// misal n diye bir sınırlayıcı bir değer vardır bu fonksiyonda
// ve en önemlisi stringin türü fark etmeksizin alan bir fonk-
// siyondur örnek vermek gerekirse
// "www.torosbilisim.com", ".", 10 diye verdiğim değerlerden çıktım
// ".torosbilisim.com" olur ilk 10 karaktere bakar eğer 10 karakter
// içinde hala yoksa null döndrür vesselam...

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*string;
	size_t	index;

	index = 0;
	string = (char *)str;
	while (index < n)
	{
		if ((unsigned char)string[index] == (unsigned char)c)
			return ((char *)&string[index]);
		index++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*p = "deneme";
	char	b = 'e';
	printf("org : %s, mine : %s", memchr(p,b,4), ft_memchr(p,b,4));
}*/
