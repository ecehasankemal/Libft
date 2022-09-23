/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 10:47:09 by hece              #+#    #+#             */
/*   Updated: 2022/09/18 10:47:25 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Girilen int değerin alfanumerik veya numerik mi diye kontrol eder

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	int	digit;
	int	digit2;
	int	digit3;

	digit = ft_isalnum(97);
	digit2 = ft_isalnum(48);
	digit3 = ft_isalnum(47);
	printf("%d %d %d", digit, digit2, digit3);
}*/
