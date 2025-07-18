/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 11:17:06 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/18 18:59:04 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stddef.h>
# include "../libft.h"

//structs
typedef struct s_test
{
	char	*name;
	int		passed;
	char	**fail_cases;
	int		fail_count;
}	t_test;

typedef struct s_case_int_to_int
{
	int		input;
	int		expected;
	char	*desc;
}	t_case_int_to_int;

typedef struct s_case_str_to_int
{
	char 	*input;
	int		expected;
	char	*desc;
}	t_case_str_to_int;

//runners
t_test runner_int_to_int(char *test_name, t_case_int_to_int *cases, int case_count, int (*fn)(int));
t_test runner_str_to_int(char *test_name, t_case_str_to_int *cases, int case_count, size_t (*fn)(const char *str));

//tests
t_test	test_isalpha(void);
t_test	test_isdigit(void);
t_test	test_isalnum(void);
t_test	test_isascii(void);
t_test	test_isprint(void);
t_test	test_strlen(void);
// t_test	test_memset(void);
// t_test	test_bzero(void);


//utils
void	print_result(t_test test);
int		check_norminette(char *file_name);

#endif