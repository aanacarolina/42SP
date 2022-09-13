/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 00:51:36 by coder             #+#    #+#             */
/*   Updated: 2022/09/14 00:55:55 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c => 32 && c <= 126)
		return (1);
	else
		return (0);
}

int main(void)
{
    int ascii = 'c';
    int non_ascii = 130;
    printf("%i\n", ft_isprint(ascii));  
    printf("%i\n", ft_isprint(non_ascii));    
    return(0);
}