/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 11:17:06 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/19 13:47:49 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stddef.h>
# include "../libft.h"

//tests
void test_ft_isalpha(void);
void test_ft_isdigit(void);
void test_ft_isascii(void);
void test_ft_isalnum(void);
void test_ft_isprint(void);
void	test_ft_strlen(void);
// t_test	test_memset(void);
// t_test	test_bzero(void);


//asserts
void	assert_equal_int(const char *case_desc, int output, int expected);

//utils
int	norm_error(char *file_name);

#endif