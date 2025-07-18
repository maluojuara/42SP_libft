/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maluojuara <maluojuara@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 21:50:42 by maluojuara        #+#    #+#             */
/*   Updated: 2025/07/17 21:54:52 by maluojuara       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

t_test test_isascii(void)
{
    t_test result = {"ft_isascii", 1, NULL, 0};
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
            {-23, 0, "testing negative number"},
            {21, 1, "testing positive number in ascii table"},
            {' ', 1, "testing space (' ')"},
            {9827, 0, "testing positive number outside ascii table"},
            {'\0', 1, "testing null"},
            {'$', 1, "testing char '$'"},
            {'\n', 1, "testing newline ('\\n')"},
        };

        int case_count = sizeof(cases) / sizeof(cases[0]);

        return runner_int_to_int(result.name, cases, case_count, ft_isascii);
    }
}
