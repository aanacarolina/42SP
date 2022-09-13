/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 00:51:36 by coder             #+#    #+#             */
/*   Updated: 2022/09/14 00:59:32 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char * ft_strnstr(const char *big, const char *little, size_t len)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (*little == '\0')
        return ((char *)big);
    while (i < len && big[i])
    {
        if (big[i] == little[0])
        {
            while (little[j])
            {
                if (big[i + j] != little[j])
                {   
                    j = 0;
                    break;
                }
                if (j == len - 1 || little[j + 1] == '\0')
                {
                    return ((char *)&big[i]);
                }
                j++;
            }
        }
        i++;
    }
    return ((char *) 0);
}