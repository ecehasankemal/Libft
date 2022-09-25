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

/*void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (index < sizeof(str))
	{
		if (str[index] == '\0')
			index++;
		write(1, &str[index], 1);
		index++;
	}
}*/

void	ft_bzero(void *ptr, size_t bytelenght)
{
	ft_memset(ptr, 0, bytelenght);
}

/*
int	main(void)
{
	char	a[] = "hece\n";
	char	mete[] = "hece";
	ft_putstr(a);
	ft_bzero(a, 3);
	ft_putstr(a);
	//ft_memset(mete, 'b', 3);
	//ft_putstr(mete);

}*/
