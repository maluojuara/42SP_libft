/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maluojuara <maluojuara@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 10:37:40 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/17 21:55:45 by maluojuara       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	main(void)
{
	t_test	(*tests[])(void) = {test_isalpha, test_isdigit, test_isascii, NULL};
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