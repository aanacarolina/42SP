/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isometric.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 22:37:10 by anacaro3          #+#    #+#             */
/*   Updated: 2023/03/27 22:44:34 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	isometric()
{
u = x*cos(α) + y*cos(α+120°) + z*cos(α-120°);
v = x*sin(α) + y*sin(α+120°) + z*sin(α-120°);
}

int toIsometric2D(double x, double y,double z, double *u, double*v)
{
    *u=(x-z)/sqrt(2);
    *v=(x+2*y+z)/sqrt(6);
    return 0;
}


void get_z_and_colour(char *column, t_point *point) //column está vindo do zvalues {}
{
    char z_and_colour_string = ft_split(column, ",");
    tpm->z = ft_atoi(z_and_colour_string[0]);
        if(z_and_colour_string[1] != NULL )
        tmp->color = ft_atoi_hexa(z_and_colour_string[1]);
        free(z_and_colour_string) 
}