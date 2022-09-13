/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 00:51:36 by coder             #+#    #+#             */
/*   Updated: 2022/09/14 00:56:10 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *memchr(const void *s, int c, size_t n)
{
    unsigned char *str;

    while(n-- > 0)
    {
        str = (unsigned char *)s;
        if (*str  == (unsigned char *)c) 
            return(str);
            s++;
    }   
    return(NULL)

}

int main (void)
{
    unsigned char word = "fruits";
    unsigned char c = "ts";    
    size_t size = 5;

    printf("%s,\n", memchr(word, c, size) )
}