/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:00:51 by hece              #+#    #+#             */
/*   Updated: 2022/09/18 15:01:08 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Eğer src destten byük olursa cpy işlemi yapar
// ama kçük olursa len değerinin belirtigi indexten
// başlayıp geriye doğru indexleri src den deste eşitler
// void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*str;
	char	*str2;
	size_t	index;

	index = 0;
	str = (char *)dest;
	str2 = (char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (str2 < str)
		while (++index <= len)
			str[len - index] = str2[len - index];
	else
		return (ft_memcpy(dest, src, len));
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*a = malloc(sizeof(char) * 5);
	char	*b = malloc(sizeof(char) * 5);
	char	*src = "ahmet";
	printf("org : %s, ", memmove(a, src, 4));
	printf("ft_ : %s", ft_memmove(b ,src , 4));
}*/
