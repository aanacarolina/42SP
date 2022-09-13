/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 00:51:36 by coder             #+#    #+#             */
/*   Updated: 2022/09/07 22:24:13 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (c + 32) ;
	else 
	return (c);
}

int main (void)
{
	int lower = 'b';
	int upper = 'B';
	printf("%d\n", ft_tolower(lower));
	printf("%d\n", ft_tolower(upper));
}