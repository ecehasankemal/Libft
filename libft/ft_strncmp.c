/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:42:40 by hece              #+#    #+#             */
/*   Updated: 2022/09/18 15:42:59 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Sınırlayıcı değer olan n kadar inceler ve 2 string arasındaki
// ilk farklılıgın ascii farkını döndürür vesselam...

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	while ((s1[index] == s2[index]) && (s1[index] != '\0')
		&& (s2[index] != '\0') && (index < n))
		index++;
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}

/*#include <stdio.h>
int	main(void)
{
	char	*s1 = "hece";
	char	*s2 = "heca";
	printf("hece > heca : %s", ft_strncmp(s1, s2, 5) > 0 ? "true" : "false" );
}*/
