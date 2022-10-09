/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 10:55:06 by hece              #+#    #+#             */
/*   Updated: 2022/09/18 10:55:31 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Girilen int değerin ascii de karşılıgı var mı yok mu kontrol eder

int	ft_isascii(int value)
{
	if (value >= 0 && value <= 127)
		return (1);
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	int	digit;
	int	digit2;

	digit = ft_isascii(124);
	digit2 = ft_isascii(1432);
	printf("%d %d", digit, digit2);
}*/
