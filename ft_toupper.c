/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:14:56 by hece              #+#    #+#             */
/*   Updated: 2022/09/18 15:15:14 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Girilen int bir değer eğer küçük alfabetik bir değer
// ise - 32 eklemek sureti ile girilen kücük alfabetik
// karakteri büyük alfabetik karaktere dönüştürür 
// man ascii yazarak daha detaylı bilgilere ulaşabilirsiniz
// vesselam...

int	ft_toupper(int value)
{
	if (value >= 'a' && value <= 'z')
		return (value - 32);
	return (value);
}

/*#include <stdio.h>
int	main(void)
{
	printf("'a' -> %c",ft_toupper('a'));
}*/
