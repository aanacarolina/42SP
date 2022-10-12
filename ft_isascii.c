/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 03:35:10 by anacaro3          #+#    #+#             */
/*   Updated: 2022/10/12 02:57:14 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isacii(int c)
{
    if (c >= 0 && c <= 127)
        return(1);
    return(0);
}
/*
int main (void)
{
	int ascii = 65;
	int non_ascii = 578;
	printf("%i", ft_isascii(ascii));
	printf("%i", ft_isascii(non_ascii));
}
*/