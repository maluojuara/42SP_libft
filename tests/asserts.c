/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asserts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:47:30 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/19 16:27:37 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	assert_equal_int(const char *case_desc, int output, int expected)
{
    if (output != expected)
        printf("%s: \033[31mko\033[0m\n", case_desc);
    else
        printf("%s: \033[32mok\033[0m\n", case_desc);
}

void	assert_equal_mem(const char *case_desc, void *output, void *expected, size_t n)
{
	if (memcmp(output, expected, n) != 0)
		printf("%s: \033[31mko\033[0m\n", case_desc);
	else
		printf("%s: \033[32mok\033[0m\n", case_desc);
}

