/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 00:51:36 by coder             #+#    #+#             */
/*   Updated: 2022/09/10 23:46:19 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	if (c => 97 && c <= 122) || ( c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

int main (void)
{
	int letter = 65;
	int num = 4;
	printf("%i", ft_isalpha(letter));
	printf("%i", ft_isalpha(num));
	return (0);
}
/* 
checks for an alphabetic character; in the  standard
 "C"  locale,  it is equivalent to (isupper(c) || is‐
lower(c)).  In some locales, there may be additional
characters for which isalpha() is true—letters which
are neither uppercase nor lowercase. 
*/