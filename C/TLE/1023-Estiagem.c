#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    int consumo;
    int pessoas;
} Pessoas;

int main()
{
    int casos;
    int totalPessoas = 0;
    int totalConsumos = 0;
    int cidadeNum = 1;

    Pessoas p[200] = {0};

    scanf("%d", &casos);

    int len = sizeof(p) / sizeof(Pessoas);

    while (casos != 0)
    {
        for (int i = 0; i < len; i++)
        {
            p[i].consumo = i + 1;
            p[i].pessoas = 0;
        }

        int n1, n2;

        for (int i = 0; i < casos; i++)
        {
            scanf("%d %d", &n1, &n2);

            totalPessoas += n1;
            totalConsumos += n2;
            int consumoM = floor(n2 / n1);
            p[consumoM - 1].pessoas += n1;
        }

        printf("Cidade# %d:\n", cidadeNum);
        cidadeNum++;
        for (int j = 0; j < len; j++)
        {
            if (p[j].pessoas != 0)
            {
                printf("%d-%d ", p[j].pessoas, p[j].consumo);
            }
        }
        
        printf("\n");
        printf("Consumo medio: %.2f m3.\n", trunc((double)totalConsumos / totalPessoas * 100.0) / 100.0);

        scanf("%d", &casos);

        if (casos != 0)
            printf("\n");

        totalPessoas = 0;
        totalConsumos = 0;
    }

    return 0;
}