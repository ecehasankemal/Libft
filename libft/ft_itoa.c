/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:30:09 by hece              #+#    #+#             */
/*   Updated: 2022/09/18 16:45:09 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Bu fonksiyonda girilen int değerinin önce basamak sayısını hesaplıyoruz
// ft_get_size fonksiyonunu bunun için olusturduk daha sonra
// mallocla yer açıp null mu döndrüyor diye kontrol ediyoruz
// ben int n değerini long bir degere eşitlemeyi tercih ettim bu sekilde
// moulinette den kaçmış oluyoruz sj 
// neyse değer eksi ise res imize - karakterini
// ekleyip geri kalan sayıyı pozitife dönştürüp
//  ft_fill_res fonksiyonumuza atıyoruz
// ki orda % alıp + '0' yaparak son karaktetri sondan başlayarak resimize
// atıyoruz
// ve en sonunda sonuna null ekleyip döndrüyoruz vesselam...

static int	ft_get_size(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static void	ft_fill_res(int size, int offset, int n, char *res)
{
	while (size > offset)
	{
		res[size - 1] = n % 10 + '0';
		n = n / 10;
		size--;
	}
}

char	*ft_itoa(int n)
{
	int		offset;
	int		size;
	char	*res;

	offset = 0;
	size = ft_get_size(n);
	res = ((char *)malloc(sizeof(char) * size + 1));
	if (res == NULL)
		return (NULL);
	if (n == -2147483648)
	{
		res[0] = '-';
		res[1] = '2';
		n = 147483648;
		offset = 2;
	}
	else if (n < 0)
	{
		res[0] = '-';
		offset = 1;
		n = -n;
	}
	ft_fill_res(size, offset, n, res);
	res[size] = '\0';
	return (res);
}

/*#include <stdio.h>
int	main(void)
{
	int	a = -2147483648;
	printf("org value is :'-456', my value is :'%s'", ft_itoa(a));
}*/
