/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:21:19 by hece              #+#    #+#             */
/*   Updated: 2022/09/19 20:21:20 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// lst nin son değerini döndürür...

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	ptr = lst;
	if (!ptr)
		return (NULL);
	while (ptr->next)
		ptr = ptr->next;
	return (ptr);
}
