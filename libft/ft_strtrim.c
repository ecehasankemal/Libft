/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:22:46 by hece              #+#    #+#             */
/*   Updated: 2022/09/18 16:23:07 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// s1 in basinda ve sonunda set deki karakterler aranir
// eger bulunursa kirpilir ve yeni bir string olusturulur
// o string return edilir
//ft_checkset de karakterde string aranir.
//39 da baslangictaki karakter icin kirpma yapiyoruz
//41 de sondaki karakterler icin kirpma yapiyoruz.
// 43 de kirpmadan sonra kalan byte sayisini hesapliyoruz
// ve yeni bir str olusturuyoruz.
// 48 de yeni str ye verileri aktiriyoruz.
// ve return ediyoruz. vesselam...

static int	ft_checkset(char c, char const *set)
{
	size_t	index;

	index = 0;
	while (set[index] != '\0')
	{
		if (set[index] == c)
			return (1);
		index++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	index;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while ((s1[start] != '\0') && (ft_checkset(s1[start], set) == 1))
		start++;
	while ((end > start) && (ft_checkset(s1[end - 1], set) == 1))
		end--;
	str = (char *)malloc(sizeof(char) * (end - start) + 1);
	if (str == NULL)
		return (NULL);
	index = 0;
	while (start < end)
		str[index++] = s1[start++];
	str[index] = '\0';
	return (str);
}
/*#include <stdio.h>

int	main(void)
{
	char	*s1 = "xXx hece xXx";
	char	*set = "xX";

	printf("%s", ft_strtrim(s1, set));
}*/
