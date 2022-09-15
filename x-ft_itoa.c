/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x-ft_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 00:45:37 by coder             #+#    #+#             */
/*   Updated: 2022/09/14 23:33:55 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_itoa(int	n)
{
	int		i;
	long	aux;
	char	*ptr;

	i = FT COUNT NUM LEN (n);
	aux = n;
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (NULL);
	ptr[i] = '\0';
	if (aux < 0)
	{
		ptr[0] = '-';
		aux *= -1;
	}
	if (aux == 0)
		ptr[0] = '0';
	ptr[i--] = '\0';
	while (aux)
	{
		ptr[i--] = (aux % 10) + '0';
		aux /= 10;
	}
	return (ptr);
}

