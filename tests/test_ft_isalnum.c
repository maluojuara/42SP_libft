/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 18:25:44 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/18 18:31:51 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

t_test test_isalnum(void)
{
    t_test result = {"ft_isalnum", 1, NULL, 0};
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
            {'m', 1, "testing char 'm'"},
            {'M', 1, "testing char 'M'"},
            {' ', 0, "testing space (' ')"},
            {'9', 1, "testing char '9'"},
            {'\0', 0, "testing null"},
            {'$', 0, "testing char '$'"},
            {'\n', 0, "testing newline ('\\n')"},
            {-3, 0, "testing negative number"},
			{1024, 0, "testing positive big number"}
        };

        int case_count = sizeof(cases) / sizeof(cases[0]);

        return runner_int_to_int(result.name, cases, case_count, ft_isalnum);
    }
}
