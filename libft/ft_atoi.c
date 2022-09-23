/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:56:13 by hece              #+#    #+#             */
/*   Updated: 2022/09/18 15:56:37 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Girilen char bir stringin sayı olan kısmını
// int bir değere dönüştürme işlemi yapar
// örnek vermek gerekirse eğer
// "     -213dsfıjsdf" olan stringimden int -213
// sonucunu alırım vesselam...

int	ft_atoi(const char *str)
{
	int	index;
	int	carp;
	int	result;

	index = 0;
	carp = 1;
	result = 0;
	while ((str[index] >= '\t' && str[index] <= '\r') || str[index] == ' ')
		index++;
	if (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
		{
			carp *= -1;
		}
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9' && str[index] != '\0')
	{
		result = ((str[index] - '0') + (result * 10));
		index++;
	}
	return (result * carp);
}

/*#include <stdio.h>
int	main(void)
{
	printf("org : %d, my : %d", atoi("-125"), ft_atoi("-125"));
}*/
