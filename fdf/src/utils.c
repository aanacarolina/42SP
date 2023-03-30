/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:19:19 by anacaro3          #+#    #+#             */
/*   Updated: 2023/03/30 19:26:01 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/utils.h"
#include <stdlib.h>


void	free_split(char **split)
{
	int	count;

	count = 0;
	while (split[count] != NULL)
	{
		free(split[count]);
		count++;
	}
	free(split);
}

