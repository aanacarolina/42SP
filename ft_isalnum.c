/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 00:51:36 by coder             #+#    #+#             */
/*   Updated: 2022/09/14 00:52:51 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int ft_isalnum (int c)
{
    if (ft_isalpha(c) || ft_isdigit(c))
       return(1);
    return(0);
}

int main (void)
{
	int letter = 65;
	int num = 4;
	printf("%i", ft_isalnum(letter));
	printf("%i", ft_isalnum(num));
}
/* 
checks for an alphabetic character; in the  standard
 "C"  locale,  it is equivalent to (isupper(c) || is‐
lower(c)).  In some locales, there may be additional
characters for which isalpha() is true—letters which
are neither uppercase nor lowercase. 
*/