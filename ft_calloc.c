/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x-ft_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 00:51:36 by coder             #+#    #+#             */
/*   Updated: 2022/09/14 23:33:36 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void *calloc(size_t nmemb, size_t size)
{
    size_t *amount;
    size_t	total_size;
    int		byte;

	total_size = nmemb * size;
	byte = 0;
	amount = malloc (total_size);
	if(!pos || (total_size > INT_MAX ))
		return(NULL);
	ft_memset(amount, byte, total_size);
	return ((void *)amount)
}

