/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isometric.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 22:37:10 by anacaro3          #+#    #+#             */
/*   Updated: 2023/03/28 19:51:45 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

// int	isometric()
// {
// u = x*cos(α) + y*cos(α+120°) + z*cos(α-120°);
// v = x*sin(α) + y*sin(α+120°) + z*sin(α-120°);
// }

// int toIsometric2D(double x, double y,double z, double *u, double*v)
// {
//     *u=(x-z)/sqrt(2);
//     *v=(x+2*y+z)/sqrt(6);
//     return 0;
// }


void get_z_and_colour(char *column, t_point *point) //column está vindo do zvalues ("2 2 3 0" ou "2 4 5,0xffffff")
{
	char z_and_colour_string = ft_split(column, ",");
	point->z = ft_atoi(z_and_colour_string[0]);
		if(z_and_colour_string[1] != NULL )
		point->color = ft_atoi_hexa(z_and_colour_string[1]);
		free(z_and_colour_string);
		return (NULL);
}


int atoi_hexa()
{
	
	
}

int	ft_atoi(const char *nptr)
{	
	int	result;
	int	i;
	int	sign;

	result = 0;
	i = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + nptr[i] - '0';
		i++;
	}
	return (result * sign);
}
//Tratar todo tipo de entrada de cor que comece com 0x 0X etc...