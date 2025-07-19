/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   norm_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 20:55:32 by maluojuara        #+#    #+#             */
/*   Updated: 2025/07/19 13:39:12 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	norm_error(char *file_name)
{
	char	cmd[256];
	snprintf(cmd, sizeof(cmd),
		"norminette -R CheckForbiddenSourceHeader %s.c | grep -q Error", file_name);

	int status = system(cmd);

	if (status == 0)
	{
		printf("\033[31mnorm error\033[0m\n");
		return (1);
	}
	return (0);
}
