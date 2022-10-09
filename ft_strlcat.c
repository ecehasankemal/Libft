/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:10:53 by hece              #+#    #+#             */
/*   Updated: 2022/09/18 15:11:57 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Bu fonksiyonda eğer son istenen string boyutum
// destimden kücükse boyutum + src min lenini döndürürüm
// çünkü atıyorum destim 5 karakter ama sizem 3 karakter
// işlem olmaz ama kaç basamak işlem yapacagını belirtmek için
// 3 + src nin boyu nu döndürür

// Eğer size destten büyükse dest ve \0 u da dahil olmak üzere
// atladıktan sonra size a ulaşasaya kadar src yi yazdırır ve
// destin son uzunlugu ile src nin kopyalanmayan kısmının uzunlugunu
// döndürür vesselam...

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dindex;
	size_t	sindex;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	dindex = ft_strlen(dest);
	sindex = 0;
	while (src[sindex] != '\0' && dindex + 1 < size)
	{
		dest[dindex] = src[sindex];
		dindex++;
		sindex++;
	}
	dest[dindex] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[sindex]));
}

/*#include <stdio.h>
int	main()
{
	char a[] = "hece";
	char b[] = "hacaoglu";
	printf("return %zu -> %s", ft_strlcat(a, b, 9), a);
}*/
