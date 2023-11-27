#include <stdlib.h>
#include <stdio.h>
// Transacao Bancaria
// criar struct chamada pessoa
// membros saldo e  nome
// criar 2 pessoas
// fazer transacao
// condicao: se saldo for menor que valor da transacao, nao completa

typedef struct s_person
{
    double balance;
    char *name;
} t_person;
// estilo 42, normal seria

void transfer_money(double transfer_amount, t_person *p1, t_person *p2)
{
    if (p1->balance > transfer_amount)
    {
        p1->balance -= transfer_amount;
        p2->balance += transfer_amount;
        printf("\n ✅ %.2f has been transfered succesfully to %s \n", transfer_amount, p1->name);
    }
    else
        printf("\n 💸 Insuficient balance 💸 \n");
}

int main(void)
{
    t_person p1 = {100.00, "carol"};
    // t_person p1.balance = 100.00;
    // t_person p1.name = "carol";
    t_person p2 = {100.00, "fillipe"};

    t_person *p3 = &p1;
    t_person *p4 = &p2;

    printf("balance before: \n %s= [%f]\n%s= [%f]\n", p1.name, p1.balance, p2.name, p2.balance);
     transfer_money(20.00, p3, p4);
    //transfer_money(120.00, p3, p4);
    printf("balance after: \n %s= [%f]\n%s= [%f]\n", p1.name, p1.balance, p2.name, p2.balance);
    return (0);
}
