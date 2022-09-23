/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:00:47 by hece              #+#    #+#             */
/*   Updated: 2022/09/18 16:01:04 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Calloc ramda tahsis edilecek olan alanı null ile doldurmaya
// yarayan bir fonksiyon oldugu çin num ve size çarpımı kadar 
// byte alanını pointer isimli pointerde adres açıyoruz
// ve onu ft_bzero fonksiyonuna gönderiyoruz oda ft_memset
// fonksiyonuna gönderiyor o fonksiyonların açıklamalarını okumanızı
// tavsiye ederim vesselam...

void	*ft_calloc(size_t num, size_t size)
{
	void	*pointer;

	pointer = malloc(size * num);
	if (!pointer)
		return (pointer);
	ft_bzero(pointer, (num * size));
	return (pointer);
}

/*#include <stdio.h>
int	main()
{
	int *ptr;
	int *ft_p;
	int i;
	int j;
	ft_p = (int *)ft_calloc(2, 2);
	ptr = (int *)calloc(2, 2);
	i = 0;
	while (i < 5)
	{
		printf("org_addres:%p | org_value:%i\n", (ptr + i), *(ptr + i));
		i++;
	}
	j = 0;
	while (j < 5)
	{
		printf("ft_addres:%p | ft_value:%i\n", (ft_p + j), *(ft_p + j));
		j++;
	}
}*/
