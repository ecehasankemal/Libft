/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:02:49 by hece              #+#    #+#             */
/*   Updated: 2022/09/18 11:03:07 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Girilen stringin uzunlugu ölçmemize yarar

// size_t ise stdlib kütüphanesinde kullanılan
// unsigned int tanımlamak için olusturulmuş bir yapıdır

size_t	ft_strlen(const char *str)
{
	size_t	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

/*#include <stdio.h>

int	main(void)
{
	char	a[] = "hece";
	int	b;

	b = ft_strlen(a);
	printf("%d", b);
}*/
