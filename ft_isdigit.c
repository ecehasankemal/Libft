/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 10:32:15 by hece              #+#    #+#             */
/*   Updated: 2022/09/18 10:33:16 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Girilen int değerin ascii de numerik olup olmadığını kontrol eder

int	ft_isdigit(int value)
{
	if (value >= '0' && value <= '9')
		return (1);
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	int	digit;
	int	digit2;

	digit = ft_isdigit(48);
	digit2 = ft_isdigit(47);
	printf("%d %d", digit, digit2);
}*/
