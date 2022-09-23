/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 10:58:58 by hece              #+#    #+#             */
/*   Updated: 2022/09/18 10:59:23 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Girilen int değerin yazdırılabilir olup olmadığını kontrol eder

int	ft_isprint(int value)
{
	if (value >= 32 && value <= 127)
		return (1);
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	int	digit;
	int	digit2;
	
	digit = ft_isprint(33);
	digit2 = ft_isprint(23);
	printf("%d %d", digit, digit2);
}*/
