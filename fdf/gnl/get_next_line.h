/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 23:26:28 by anacaro3          #+#    #+#             */
/*   Updated: 2023/04/05 00:18:25 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif 

# include <stdlib.h>
# include <unistd.h>

char	*extra_letters(char *save);
char	*ft_strchr2(char *s, int c); //change name
char	*ft_strjoin2(char *s1, char *s2);//change name
char	*get_next_line(int fd);
char	*join_strings(int fd, char *save);
char	*read_line(char *save);
size_t	ft_strlen2(char *str);//change name

#endif
