/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   runner_int_to_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:48:28 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/17 14:25:26 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

t_test runner_int_to_int(t_int_to_int cases[], int cases_count, int (*func)(int), char *function_name)
{
	t_test	result;
	result.name = function_name;
	result.passed = 1;
	result.fail_count = 0;
	int	i = 0;

	while (i < cases_count)
	{
		if (func(cases[i].input) != cases[i].expected)
		{
			result.passed = 0;
			result.fail_count++;
		}
		i++;
	}
	return (result);
}