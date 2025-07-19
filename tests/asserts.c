/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asserts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:47:30 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/19 13:50:52 by malcosta         ###   ########.fr       */
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

void	assert_equal_int(const char *case_desc, int output, int expected)
{
    if (output != expected)
        printf("%s: \033[31mko\033[0m\n", case_desc);
    else
        printf("%s: \033[32mok\033[0m\n", case_desc);
}
