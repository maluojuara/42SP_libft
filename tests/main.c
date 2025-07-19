/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 10:37:40 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/19 17:07:46 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	main(void)
{
	void	(*tests[])(void) = {test_ft_isalpha, test_ft_isdigit, test_ft_isascii, 
		test_ft_isalnum, test_ft_isprint, test_ft_strlen, test_ft_memset, test_ft_bzero, 
		test_ft_memcpy, NULL};
	int	i;

	i = 0;
	while (tests[i] != NULL)
	{
		tests[i]();
		i++;
	}
	return (0);
}
