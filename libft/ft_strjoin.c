/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:18:13 by hece              #+#    #+#             */
/*   Updated: 2022/09/18 16:18:30 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Girilen 2 stringi s1 s2 şeklinde sırasıyla olacak sekilde
// oluşturulan bir pointer a kaydeder ve o adresi döndrür
// tabi malloc la 2 stringin uzunlugı char tipinde byte değeri
// açıyoruz vesselam...

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

/*#include <stdio.h>
int	main(void)
{
	char	*s1 = "kemal";
	char	*s2 = " hece";
	char	*s3 = ft_strjoin(s1, s2);
	printf("%s + %s -> %s", s1, s2, s3);
}*/
