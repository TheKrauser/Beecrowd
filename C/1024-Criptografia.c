#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[1001];
    char palavraInv[1001];
    int casos;
    int tam;

    scanf("%d", &casos);

    for (int i = 0; i < casos; i++)
    {
        //Receber a string inteira mesmo após o espaço e não imprimir um \n na hora do ENTER (foi o melhor jeito que encontrei de resolver os dois casos, fgets não foi tão bem)
        scanf(" %[^\n]", palavra);
        tam = strlen(palavra);

        for (int j = 0; j < tam; j++)
        {
            if ((palavra[j] >= 'A' && palavra[j] <= 'Z') || (palavra[j] >= 'a' && palavra[j] <= 'z'))
            {
                palavra[j] += 3;
            }
        }

        strcpy(palavraInv, palavra);
        for (int j = 0; j < tam; j++)
        {
            palavraInv[j] = palavra[(tam - j) - 1];
        }

        for (int j = (tam / 2); j < tam; j++)
        {
            palavraInv[j] -= 1;
        }

        fputs(palavraInv, stdout);

        if (i < casos)
            printf("\n");
    }

    return 0;
}