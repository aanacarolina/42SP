/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:53:39 by anacaro3          #+#    #+#             */
/*   Updated: 2023/03/08 19:53:40 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"


int ft_close_esc(int keysym, t_data *minilib)
{

	if (keysym == XK_Escape)
	{
		mlx_destroy_window(minilib->mlx_ptr, minilib->win_ptr);
		exit(0);
	}
	return (0);
}

int ft_close_x(t_data *minilib)
{

	mlx_destroy_window(minilib->mlx_ptr, minilib->win_ptr);
	exit(0);
	return (0);
}