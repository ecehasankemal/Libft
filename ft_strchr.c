/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:19:51 by hece              #+#    #+#             */
/*   Updated: 2022/09/18 15:20:08 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Girilen stringde belirtilen karakteri arayıp
// bulunduktan sonraki kısımda o adresten itibaren
// geri kalanı döndrmeye yarıyor örnek vermek gerekirse
// "www.torosbilisim.com" '.' olsun çıktım ise
// ".torosbilism.com" olarak olacaktır vesselam...

char	*ft_strchr(const char *str, int c)
{
	int	index;

	index = 0;
	if (str == NULL)
		return (NULL);
	while (str[index] != '\0')
	{
		if (str[index] == c)
			return ((char *)&str[index]);
		index++;
	}
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	char	*str = "deneme yazisi";
	char	c = 'z';
	printf("%s | %c -> %s", str, c, ft_strchr(str, c));
}*/
