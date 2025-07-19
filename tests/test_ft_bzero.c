/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:51:47 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/19 16:56:58 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void test_ft_bzero(void)
{
    char function_name[] = "ft_bzero";
    printf("\033[1m%s:\033[0m\n\n", function_name);

    if (!norm_error(function_name))
    {
        char buf1[20] = "Hello, World!";
        char buf2[20] = "Hello, World!";
        ft_bzero(buf1, 7);
        bzero(buf2, 7);
        assert_equal_mem("zero first 7 bytes", buf1, buf2, 20);

        char buf3[10] = "123456789";
        char buf4[10] = "123456789";
        ft_bzero(buf3, 10);
        bzero(buf4, 10);
        assert_equal_mem("zero entire buffer", buf3, buf4, 10);

        char buf5[5] = "abcde";
        char buf6[5] = "abcde";
        ft_bzero(buf5, 0);
        bzero(buf6, (size_t)0);
        assert_equal_mem("zero zero bytes", buf5, buf6, 5);

        char buf7[1] = {'x'};
        char buf8[1] = {'x'};
        ft_bzero(buf7, 1);
        bzero(buf8, 1);
        assert_equal_mem("zero single byte buffer", buf7, buf8, 1);

        char buf9[5] = {0};
        char buf10[5] = {0};
        ft_bzero(buf9, 5);
        bzero(buf10, 5);
        assert_equal_mem("zero already zeroed buffer", buf9, buf10, 5);

        char buf11[6] = {0xFF, 0xAB, 0x00, 0x01, 0x10, 0x00};
        char buf12[6] = {0xFF, 0xAB, 0x00, 0x01, 0x10, 0x00};
        ft_bzero(buf11, 6);
        bzero(buf12, 6);
        assert_equal_mem("zero buffer with non-ASCII bytes", buf11, buf12, 6);
    }

    printf("-------------------------------\n");
}
