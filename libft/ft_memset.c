/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:24:25 by hece              #+#    #+#             */
/*   Updated: 2022/09/18 11:24:42 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ptr dizisini bytelenght'ye kadar value byte'i doldurur

void	*ft_memset(void *ptr, int value, size_t bytelenght)
{
	char	*str;
	size_t	index;

	index = 0;
	str = (char *)ptr;
	while (index < bytelenght)
	{
		str[index] = value;
		index++;
	}
	return (ptr);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*a = malloc(sizeof(char) * 5);
	char	*b = malloc(sizeof(char) * 5);
	char	src = 'A';
	printf("org : %s, ", memset(a, src, 5));
	printf("mine : %s", ft_memset(b, src, 5));
}*/
