/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:06:18 by hece              #+#    #+#             */
/*   Updated: 2022/09/18 15:06:36 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Strlcpy deki olay src yi dest e kopyaladıktan sonra
// src nin lenght ini geri döndürür  vesselam...

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	index;

	index = 0;
	if (size > 0)
	{
		while (index < (size - 1) && src[index] != '\0')
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	while (src[index] != '\0')
	{
		index++;
	}
	return (index);
}

/*#include <stdio.h>
int	main()
{
	char a[] = "hece";
	char b[] = "hacaoglu";
	printf("return %zu -> %s", ft_strlcpy(a, b, 9), a);
}*/
