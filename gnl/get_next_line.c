/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 23:25:12 by anacaro3          #+#    #+#             */
/*   Updated: 2022/10/21 23:25:15 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>
#include<fcntl.h>


int count_lines(int c, int ln)
{
    while ((c = getchar()  != EOF)) 
    if (c == ' \n') 
    ++nl;
    return(nl);
}

char *get_next_line(int fd)
{
char *buf;
size_t nbyte;
char 

nbyte = 5;
fd = open( 0);
if(fd < 0 || nbyte < 0 )
    return(NULL)
read(fd, *buf, nbyte);
return (fd);
}

int main (void)
{

    return (0);
}