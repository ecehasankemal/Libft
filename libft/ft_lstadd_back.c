/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:46:56 by hece              #+#    #+#             */
/*   Updated: 2022/09/19 20:46:58 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//19da lst bos ise direkt ilk eleman new atanir.
//24de  ptr nin en sonuna dek gider ptr next null oldugunda
// 26 da new parametresi en sona atanir ve new in nexti null yapilir.
// cunku new->next null olmali en sona new.

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (*lst == NULL)
		lst->next = new;
	else
	{
		ptr = *lst;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
	}
}
