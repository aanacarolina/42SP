#include<unistd.h>
/*;;write a function alpha_mirror that takes a string and displays this string
;;after replacing each alphabetical character by the opposite alphabetical character, followed by a newline.

;'a' becomes 'z', 'Z' becomes 'A'
;'d' becomes 'w', 'M' becomes 'N'

;Case is not changed.

;verificar case
;fazer correspondencias a = z (poderia calcular, mas ok - ou qdo soma no começo diminui no final)
;substituir - map
*/

void alpha_mirror(char *sentence)
{
    int i = 0;
    while (sentence[i] != '\0')
    {
        if (sentence[i] >= 97 && sentence[i] <= 122)
        {
            sentence[i] = 122 - sentence[i] + 97; // calculo da letra o valor da letra a=97 z=122 minusculas
        }
        else if (sentence[i] >= 65 && sentence[i] <= 90)
        {
            sentence[i] = 90 - sentence[i] + 65; // calculo da letra o valor da letra A=65 Z=90 maiusculas
        }
        write(1, sentence[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
   printf("%s ARG", &argv[1]);
   if (argc == 2)
        alpha_mirror(argv[1]);
    else
        write(1, "\n", 1);
    return (0);
}
