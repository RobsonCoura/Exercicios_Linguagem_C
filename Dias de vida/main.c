#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variaveis
    float anos, dias;

    //Saida de Dados
    printf("Digite sua idade em anos: ");

    //Entrada de Dados
    scanf ("%f", &anos);

    //Processamento de Dados
    dias = anos * 365;

    //Saida de Dados
    printf ("Sua idade em dias: %.0f.\n", dias);

    system ("PAUSE");
}
