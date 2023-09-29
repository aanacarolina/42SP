
# lembrar sinal mudar se - sinal de negativo
No inicio a flag sign e setada como 1 (positivo), 
Apenas mudamos a flag sign para -1 se negativo (se encontrarmos sinal - na posicao 0 da string), 
ao final o resultado vai ser multiplicado pela flag para adicionar o sinal adequado
(um )


# result = result * 10 + *str - '0';


result * 10 = pega valor inicial de result e multiplca por 10 para mover 1 posicao pra esquerda (<-)
(*str - '0') = conta do valor ascii do inteiro mostrado na string - 48 (ex #7 = 55 -> 53 - 48 = 7)

*str - '0' resulta em 7.
result * 10 é 230.
230 + 7 resulta em 237.

result = 237

# ordem de execução, o passo a passo seria:

Avaliação de *str.
Avaliação de *str - '0'.
Avaliação de result * 10.
Soma dos resultados de 2 e 3.
Atribuição do resultado a result.
Lembrando que isso acontece em uma única linha de código, e as operações são realizadas sequencialmente, da esquerda para a direita.



return -> resultado * sign

