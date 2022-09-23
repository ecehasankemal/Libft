/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 21:43:15 by hece              #+#    #+#             */
/*   Updated: 2022/09/19 21:43:17 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// verilen lst struct listesi gezilir
// gecici olarak ptr degiskininde lst yi tutariz.
// tum degerler silinir.

void	ft_lstclear(t_list **lst, void (*del)(vold *))
{
	t_list	*ptr;
	t_list	*t;

	ptr = *lst;
	while (ptr)
	{
		(*del)(ptr->content);
		t = ptr->next;
		free(ptr);
		ptr = t;
	}
	*lst = NULL;
}
