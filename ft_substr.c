/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:14:08 by hece              #+#    #+#             */
/*   Updated: 2022/09/18 16:14:24 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Girilen stringimizin start ve len olmak üzere 2 tane sınırlayıcı
// ile işlenip en son oluşan durumu bir stringe kaydedip o stringi 
// döndürmeye yarıyor. Öncelikle malloclar hafıza da yer açıyoruz
// sonra allocation hatası (yani null sa boşsa) olma durumuna karşı
// NULL döndürüyoruz girilen stringimin indexi start indi değerim olasaya
// kadar indexi arttıyoruz olduktan sonra stringimi yeni olusturdugum stringe
// kaydediyorum taki len kadar işlem tamamen bunu yapıyor en sonra
// olusturdugumuz stringi döndürüyoruz vesselam...

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc(sizeof(*s) * len + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}

/*#include <stdio.h>
int	main(void)
{
	char	*str = "kemal hece";
	char	*ret = ft_substr(&str[3], 0, 9);
	printf("%s -> %s", str, ret);
}*/
