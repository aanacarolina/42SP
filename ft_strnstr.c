/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 03:37:53 by anacaro3          #+#    #+#             */
/*   Updated: 2022/10/12 03:32:28 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t size_little;

    size_little = ft_strlen(little);
    if(!little)
        return((char *)big);

    while(size_little < len && *big != '\0')
    {
        if(*little == *big && ft_strncmp(big, little, size_little) == 0)
            return((char *)big);
        big++;
        len--;
    }
    return(NULL);
}
/*
int main (void)
{
	char big[] = "Dude, where is my car";
	char little[] = "where";
	printf("%d\n", strnstr(big, little, 5));
	return (0);
}
*/