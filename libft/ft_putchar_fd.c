/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:05:03 by hece              #+#    #+#             */
/*   Updated: 2022/09/18 17:05:08 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// belirtilen dosya tanimlayicisina (fd) c karakterini yazar.
// vesselam...

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
