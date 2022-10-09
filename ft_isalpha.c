/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 10:26:07 by hece              #+#    #+#             */
/*   Updated: 2022/09/18 10:26:51 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Girilen int değerin ascii de alfanumerik mi değil mi kontrol eder

int	ft_isalpha(int value)
{
	if ((value >= 'a' && value <= 'z') || (value >= 'A' && value <= 'Z'))
		return (1);
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	int	digit;
	int	digit2;

	digit = ft_isalpha(97);
	digit2 = ft_isalpha(96);
	printf("%d %d", digit, digit2);
}*/
