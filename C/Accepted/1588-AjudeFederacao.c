#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef struct
{
    char nome[21];
    int pontos, vitorias, gols, ordemEntrada;
} Time;

int Compara(const void *, const void *);

int main()
{
    Time times[100] = {0};
    int casos, nTimes, nJogos;
    int x, y;
    char time1[21], time2[21];

    scanf("%d", &casos);

    for (int i = 0; i < casos; i++)
    {
        scanf("%d %d", &nTimes, &nJogos);

        for (int j = 0; j < nTimes; j++)
        {
            scanf("%s", times[j].nome);
            times[j].ordemEntrada = j + 1;
        }

        for (int j = 0; j < nJogos; j++)
        {
            scanf("%d %s %d %s", &x, time1, &y, time2);

            if (x > y)
            {
                for (int k = 0; k < nTimes; k++)
                {
                    if (strcmp(time1, times[k].nome) == 0)
                    {
                        times[k].pontos += 3;
                        times[k].vitorias += 1;
                        times[k].gols += x;
                    }
                    if (strcmp(time2, times[k].nome) == 0)
                    {
                        times[k].gols += y;
                    }
                }
            }
            else if (x == y)
            {
                for (int k = 0; k < nTimes; k++)
                {
                    if (strcmp(time1, times[k].nome) == 0 || strcmp(time2, times[k].nome) == 0)
                    {
                        times[k].pontos += 1;
                        times[k].gols += x;
                    }
                }
            }
            else
            {
                for (int k = 0; k < nTimes; k++)
                {
                    if (strcmp(time2, times[k].nome) == 0)
                    {
                        times[k].pontos += 3;
                        times[k].vitorias += 1;
                        times[k].gols += y;
                    }
                    if (strcmp(time1, times[k].nome) == 0)
                    {
                        times[k].gols += x;
                    }
                }
            }
        }

        qsort(times, nTimes, sizeof(times[0]), Compara);

        for (int j = 0; j < nTimes; j++)
        {
            printf("%s\n", times[j].nome);
        }

        for (int j = 0; j < nTimes; j++)
        {
            times[j].nome[0] = '\0';
            times[j].ordemEntrada = 0;
            times[j].pontos = 0;
            times[j].gols = 0;
            times[j].vitorias = 0;
        }
    }

    return 0;
}

int Compara(const void *p1, const void *p2)
{
    Time *i, *j;

    i = (Time *)p1;
    j = (Time *)p2;

    if (i->pontos > j->pontos)
    {
        return -1;
    }
    else if (i->pontos < j->pontos)
    {
        return 1;
    }
    else
    {
        if (i->vitorias > j->vitorias)
        {
            return -1;
        }
        else if (i->vitorias < j->vitorias)
        {
            return 1;
        }
        else
        {
            if (i->gols > j->gols)
            {
                return -1;
            }
            else if (i->gols < j->gols)
            {
                return 1;
            }
            else
            {
                if (i->ordemEntrada > j->ordemEntrada)
                {
                    return 1;
                }
                else if (i->ordemEntrada < j->ordemEntrada)
                {
                    return -1;
                }
                else
                {
                    return 0;
                }
            }
        }
    }
}