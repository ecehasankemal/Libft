/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:33:43 by hece              #+#    #+#             */
/*   Updated: 2022/09/20 11:33:46 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// lst nin tum elemanlarina f fonksiyonu uygulanir
// uygulama sonucunda olusan yeni elemanlar ile (25. satir)
// yeni bir liste olusturulur 31. satir
// gerekli durumlarda (lst bittikten sonra) veya f null dondurunce
// yeni olusturulan first degiskeninin icerisi temizlenir
// ve  delete ile silinir.

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*node;

	if (!lst || !f)
		return (NULL);
	result = 0;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&result, del);
			return (0);
		}
		ft_lstadd_back(&result, node);
		lst = lst->next;
	}
	return (result);
}
