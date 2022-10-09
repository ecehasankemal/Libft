/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:16:57 by hece              #+#    #+#             */
/*   Updated: 2022/09/18 15:17:15 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Girilen int bir değer eğer büyük alfabetik bir değer
// ise + 32 eklemek sureti ile girilen büyük alfabetik
// karakteri küçük alfabetik karaktere dönüştürür
// man ascii yazarak daha detaylı bilgilere ulaşabilirsiniz
// vesselam...

int	ft_tolower(int value)
{
	if (value >= 'A' && value <= 'Z')
		return (value + 32);
	return (value);
}

/*#include <stdio.h>
int	main(void)
{
	printf("'A' -> %c",ft_tolower('A'));
}*/
