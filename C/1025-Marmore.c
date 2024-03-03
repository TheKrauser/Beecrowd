#include <stdio.h>
#include <stdlib.h>

int Compara(const void * a, const void * b)
{
    int *p1 = (int*)a;
    int *p2 = (int*)b;

    if (*p1 < *p2)
        return -1;
    else if (*p1 == *p2)
        return 0;
    else
        return 1;
}

int main()
{
    int nMarmores = 0, nConsultas = 0;
    int consulta = 0, cont = 0;
    int *valores;
    int tamanho;

    scanf("%d %d", &nMarmores, &nConsultas);
    tamanho = nMarmores;
    valores = (int*)malloc(tamanho * sizeof(int));

    while(nMarmores != 0 && nConsultas != 0)
    {
        for (int i = 0; i < nMarmores; i++)
        {
            scanf("%d", &valores[i]);
        }

        qsort(valores, tamanho, sizeof(valores[0]), Compara);

        int isFound = 0;
        printf("CASE# %i:\n", cont+1);

        for (int i=0; i<nConsultas; i++)
        {
            scanf("%d", &consulta);

            isFound = 0;
            for (int j=0; j<tamanho; j++)
            {
                if (valores[j] == consulta)
                {
                    printf("%i found at %i\n", valores[j], j+1);
                    isFound = 1;
                    break;
                }
                else
                {
                    continue;
                }
            }

            if (isFound != 1)
                printf("%i not found\n", consulta);
        }

        scanf("%d %d", &nMarmores, &nConsultas);
        tamanho = nMarmores;
        valores = (int*)malloc(tamanho * sizeof(int));
        cont++;
    }
    return 0;
}