/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 18:48:02 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/18 18:55:54 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"


t_test test_strlen(void)
{
    t_test result = {"ft_strlen", 1, NULL, 0};
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
        t_case_str_to_int cases[] = {
			{"malu", 4, "testing string \"malu\""},
			{"", 0, "testing empty string"},
			{"a", 1, "testing string with one letter"},
			{"a 	90", 5, "testing string with spaces and numbers"},
			{"oioioioioioioioioiioioioioioioioioioioioi", 41, "testing big string"},
			{"abc\n", 4, "testing string with new line"},
			{"a$!-", 4, "testing string with special ascii characters"}
        };

        int case_count = sizeof(cases) / sizeof(cases[0]);

        return runner_str_to_int(result.name, cases, case_count, ft_strlen);
    }
}
