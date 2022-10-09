/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:14:55 by hece              #+#    #+#             */
/*   Updated: 2022/09/19 20:14:57 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 20. satirda lst bos ise NULL(0) doner
// 22 de lst nin next i bos olana dek, devam edilir
// sonunda index return edilir.

int	ft_lstsize(t_list *lst)
{
	int	index;

	index = 0;
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
		index++;
	}
	return (index);
}
