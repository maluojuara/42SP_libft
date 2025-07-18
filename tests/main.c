/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 10:37:40 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/18 18:52:40 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	main(void)
{
	t_test	(*tests[])(void) = {test_isalpha, test_isdigit, test_isascii, test_isalnum, 
		test_isprint, test_strlen, NULL};
	int	i;

	i = 0;
	while (tests[i] != NULL)
	{
		t_test	result = tests[i]();
		print_result(result);
		i++;
	}
	return (0);
}


// test_isdigit, test_isalnum, 
// 		test_isprint, test_strlen, test_memset, test_bzero, NULL