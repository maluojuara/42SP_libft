/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 18:32:25 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/18 18:34:18 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

t_test test_isprint(void)
{
    t_test result = {"ft_isprint", 1, NULL, 0};
    int norm_error = check_norminette(result.name);

    if (norm_error)
    {
        result.passed = 0;
        static char *norm_msg = "norm error";
        result.fail_cases = &norm_msg;
        result.fail_count = 1;
        return result;
    }
    else
    {
        t_case_int_to_int cases[] = {
			{-23, 0, "testing int -23"},
			{42, 1, "testing int 42"},
			{' ', 1, "testing space (' ')"},
			{928233, 0, "testing big integer"},
			{'\0', 0, "testing null"},
			{127, 0, "testing 127"},
        };

        int case_count = sizeof(cases) / sizeof(cases[0]);

        return runner_int_to_int(result.name, cases, case_count, ft_isprint);
    }
}
