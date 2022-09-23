/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:51:45 by hece              #+#    #+#             */
/*   Updated: 2022/09/18 14:52:52 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Dizideki belirlilen byte boyutu kadarlı olan kısmı
// 0 lar ile doldurur misal "hasan" diye bir stringim var
// ft_bzero(str, 4); dersem
// "0000n" çıktısını verir vesselam...

void	ft_bzero(void *ptr, size_t bytelenght)
{
	ft_memset(ptr, 0, bytelenght);
}

/*#include <stdio.h>

int	main(void)
{
	char	a[] = "hece";
	
	printf("before : %s, ", a);
	ft_bzero(a, sizeof(a));
	printf("after : %s, ", a);
}*/
