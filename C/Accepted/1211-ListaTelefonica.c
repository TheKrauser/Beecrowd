#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    char numero[201];
} Telefone;

int Compara(const void *, const void *);
Telefone telefones[100000];

int main()
{
    int nTelefones;

    while (scanf("%d", &nTelefones) != EOF)
    {
        for (int i = 0; i < nTelefones; i++)
        {
            scanf("%s", telefones[i].numero);
        }

        qsort(telefones, nTelefones, sizeof(telefones), Compara);

        for (int i = 0; i < nTelefones; i++)
        {
            printf("%s", telefones[i].numero);
        }
    }

    return 0;
}

int Compara(const void *a, const void *b)
{
    Telefone *i, *j;

    i = (Telefone *)a;
    j = (Telefone *)b;

    int aux = strcmp(i->numero, j->numero);

    if (aux == 0)
        return 0;
    else if (aux < 0)
        return 1;
    else
        return -1;
}