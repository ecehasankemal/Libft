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
