/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:50:30 by hece              #+#    #+#             */
/*   Updated: 2022/09/18 15:50:48 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Tıpkı strncmp gibi tepki verir lakin tek farkı stringin türü önemsizdir
// vesselam...

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	index;

	index = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while ((str1[index] == str2[index]) && (str1[index] != '\0')
		&& (str2[index] != '\0') && (index < n))
		index++;
	return ((unsigned char)str1[index] - (unsigned char)str2[index]);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*p1 = "bubir";
	char	*p2 = "buiki";
	printf("org : %d, mine : %d", memcmp(p1,p2,5), ft_memcmp(p1,p2,5));
}*/
