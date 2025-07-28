/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 14:12:41 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/28 19:55:41 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	char	*ptr;

	ptr = s;
	if (!s)
		return ;
	while (*ptr)
	{
		ft_putchar_fd(*ptr, fd);
		ptr++;
	}
}
