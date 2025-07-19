/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 11:17:06 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/19 17:07:26 by malcosta         ###   ########.fr       */
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
void	test_ft_isalpha(void);
void	test_ft_isdigit(void);
void	test_ft_isascii(void);
void	test_ft_isalnum(void);
void	test_ft_isprint(void);
void	test_ft_strlen(void);
void	test_ft_memset(void);
void	test_ft_bzero(void);
void 	test_ft_memcpy(void);


//asserts
void	assert_equal_int(const char *case_desc, int output, int expected);
void	assert_equal_mem(const char *case_desc, void *output, void *expected, size_t n);

//utils
int	norm_error(char *file_name);

#endif