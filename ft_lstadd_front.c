/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:54:10 by hece              #+#    #+#             */
/*   Updated: 2022/09/19 19:54:13 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// daha once olusturulan struct dizimiz (t_list) ve eklenecek eklenen
// yapıdan olusturulan lst ve new atanır ve
// 17. satirda new innext elemani lst nin icerisine atanir.
// 18 de lst nin asil degeri new olur.
// boylece new lst nin onune eklenmis olur.

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
