#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*a;
	char	b;
	char	**sonuc;
	int	islem;

	a = "hece her daim en iyi";
	b = ' ';
	islem = 0;
	sonuc = ft_split(a, b);
	while (islem <= 5)
	{
		printf("%d, kisim %s\n", islem, sonuc[islem]);
		islem++;
	}
}
