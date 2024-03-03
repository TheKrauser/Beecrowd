#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nCorridas, nPilotos;
    int chegadas[100][100];
    int linPontuacao, colPontuacao, pontuacao[100][101];
    int pontos[100] = {0};
    int saida[100] = {0};

    scanf("%d %d", &nCorridas, &nPilotos);

    while (nCorridas != 0 && nPilotos != 0)
    {
        for (int i = 0; i < nCorridas; i++)
        {
            for (int j = 0; j < nPilotos; j++)
            {
                scanf("%d", &chegadas[i][j]);
            }
        }

        scanf("%d", &linPontuacao);

        for (int i = 0; i < linPontuacao; i++)
        {
            scanf("%d", &colPontuacao);
            for (int j = 0; j < colPontuacao; j++)
            {
                scanf("%d", &pontuacao[i][j]);
            }

            for (int j = 0; j < colPontuacao; j++)
            {
                for (int k = 0; k < nCorridas; k++)
                {
                    for (int l = 0; l < nPilotos; l++)
                    {
                        // printf("if %d == %d\n", chegadas[k][l], j + 1);
                        if (chegadas[k][l] == j + 1)
                        {
                            // printf("Piloto %d = %d + %d\n", l + 1, pontos[l], pontuacao[i][j]);
                            pontos[l] += pontuacao[i][j];
                        }
                    }
                }
            }

            int maior = 0;
            for (int ii = 0; ii < nPilotos; ii++)
            {
                if (pontos[ii] > maior)
                {
                    maior = pontos[ii];
                }
            }

            int aux = 0;
            for (int ii = 0; ii < nPilotos; ii++)
            {
                if (pontos[ii] == maior)
                {
                    saida[aux] = ii+1;
                    aux++;
                }
            }

            for (int ii=0; ii<aux; ii++)
            {
                printf("%d", saida[ii]);

                if (ii+1 == aux)
                {
                    break;
                }
                else
                {
                    printf(" ");
                }
            }

            for (int j = 0; j < nPilotos; j++)
            {
                pontos[j] = 0;
            }

            printf("\n");
        }

        scanf("%d %d", &nCorridas, &nPilotos);
    }

    return 0;
}