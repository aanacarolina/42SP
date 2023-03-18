/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isometric.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 22:37:10 by anacaro3          #+#    #+#             */
/*   Updated: 2023/03/18 17:56:06 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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