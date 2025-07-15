/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 10:40:29 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/15 12:41:21 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	test_isalpha(void)
{
	if (ft_isalpha('m') != 1)
		return (0);
	if (ft_isalpha('M') != 1)
		return (0);
	if (ft_isalpha(' ') != 0)
		return (0);
	if (ft_isalpha('9') != 0)
		return (0);
	if (ft_isalpha('\0') != 0)
		return (0);
	if (ft_isalpha('$') != 0)
		return (0);
	if (ft_isalpha('\n') != 0)
		return (0);
	if (ft_isalpha(-3) != 0)
		return (0);
	return (1);
}

int	test_isdigit(void)
{
	if (ft_isdigit('m') != 0)
		return (0);
	if (ft_isdigit('M') != 0)
		return (0);
	if (ft_isdigit('9') != 1)
		return (0);
	if (ft_isdigit(' ') != 0)
		return (0);
	if (ft_isdigit('\0') != 0)
		return (0);
	if (ft_isdigit('$') != 0)
		return (0);
	if (ft_isdigit('\n') != 0)
		return (0);
	if (ft_isdigit(-3) != 0)
		return (0);
	return (1);
}

int	test_isalnum(void)
{
	if (ft_isalnum('m') != 1)
		return (0);
	if (ft_isalnum('M') != 1)
		return (0);
	if (ft_isalnum('9') != 1)
		return (0);
	if (ft_isalnum(' ') != 0)
		return (0);
	if (ft_isalnum('\0') != 0)
		return (0);
	if (ft_isalnum('$') != 0)
		return (0);
	if (ft_isalnum('\n') != 0)
		return (0);
	if (ft_isalnum(-3) != 0)
		return (0);
	return (1);
}

int	test_isascii(void)
{
	
}