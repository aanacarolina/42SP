/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mochida.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:07:36 by anacaro3          #+#    #+#             */
/*   Updated: 2023/05/03 21:33:32 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void mudaLivro(char *construcao)
{
    construcao = 'O';
}

int main (void)
{
    char *casaDasRosas; // ----> 0x654654646545
    
    casaDasRosas = 'a'; // -----> 97
    printf ("casaDasRosas: %p\n", &casaDasRosas);
    mudaLivro(&casaDasRosas);
    printf ("dentro de casaDasRosas que fica no endereço [%p] temos: [%c]\n", &casaDasRosas, casaDasRosas);
    
    return 0;
}