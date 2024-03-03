#include <stdio.h>
#include <string.h>

int main()
{
    int casos;
    char palavra[1001];
    char palavraInv[1001];

    scanf("%d", &casos);

    for(int i=0; i<casos; i++)
    {
        fgets(palavra, 1001, stdin);
        int tam = strlen(palavra);

        for(int j=0; j<tam; j++)
        {
            if ((palavra[j] >= 65 && palavra[j] <= 90) || (palavra[j] >= 97 && palavra[j] <= 122))
            {
                palavra[j]+=3;
            }
        }

        strcpy(palavraInv, palavra);

        for(int j=0; j<tam; j++)
        {
            palavraInv[j] = palavra[tam-(j+1)];
        }

        for(int j=tam/2; j<tam; j++)
        {
            palavraInv[j]-=1;
        }

        puts(palavraInv);
    }

    return 0;
}