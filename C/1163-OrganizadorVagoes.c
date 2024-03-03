#include <stdio.h>
#include <stdlib.h>

int main()
{
    int casos, tamanho;
    int ordemVagoes[50];
    int tamanhoAux = 0;

    scanf("%d", &casos);

    for (int i = 0; i < casos; i++)
    {
        scanf("%d", &tamanho);
        tamanhoAux = tamanho;

        for (int j = 0; j < tamanho; j++)
        {
            scanf("%d", &ordemVagoes[j]);
        }

        int trocas = 0;

        do
        {
            int aux = 0;
            int maior = 0;
            int pos = 0;

            for (int j = 0; j < tamanhoAux; j++)
            {
                if (j == 0)
                {
                    maior = ordemVagoes[0];
                    continue;
                }

                if (maior < ordemVagoes[j])
                {
                    maior = ordemVagoes[j];
                    pos = j;
                }
            }

            if (pos == tamanhoAux - 1)
            {
                tamanhoAux--;
            }
            else
            {
                while (pos < tamanhoAux - 1)
                {
                    aux = ordemVagoes[pos + 1];
                    ordemVagoes[pos + 1] = maior;
                    ordemVagoes[pos] = aux;
                    pos++;
                    trocas++;
                }
                tamanhoAux--;
            }
        } while (tamanhoAux > 0);

        printf("Optimal train swapping takes %d swaps.\n", trocas);
    }

    return 0;
}