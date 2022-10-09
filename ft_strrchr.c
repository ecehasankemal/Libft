/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:38:32 by hece              #+#    #+#             */
/*   Updated: 2022/09/18 15:38:52 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Girilen stringde belirtilen karakteri
// sondan başlayıp bulduktan sonraki kısımda
// o adresten itibaren geri kalanı döndürmeye
// yarıyor örnek vermek gerekir ise;
// "www.toros.bilisim.com" "." olsun çıktım ise
// ".com" olarak olacaktır ayrıyetten eğer
// aranan karakter bulunmaz ise stringin son karakteri
// olan null u basar

char	*ft_strrchr(const char *str, int c)
{
	int	index;

	index = ft_strlen(str);
	if (c == 0)
		return ((char *)&str[index]);
	while (index >= 0)
	{
		if (str[index] == c)
			return ((char *)&str[index]);
		index--;
	}
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	char	*str = "www.toros.bilisim. com";
	char	c = '.';
	printf("%s | %c -> %s", str, c, ft_strrchr(str, c));
}*/
