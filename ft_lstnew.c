/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 20:37:47 by hece              #+#    #+#             */
/*   Updated: 2022/09/18 20:37:52 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// BU BIR BAGLI LISTEDIR.
// fonksiyon cagrildiginda verilen icerik (content)
// structimizin content bolumune kaydedilir.
// ilk olusturuldugu icinde next degeri NULL dur
// ve olusturulan yeni struct return edilir.

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
