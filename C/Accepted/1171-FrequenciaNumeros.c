#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nValores;
    int valores[40000];
    int numeros[40000] = {0};

    scanf("%d", &nValores);

    for (int i = 0; i < nValores; i++)
    {
        scanf("%d", &valores[i]);
    }

    for (int i = 0; i < nValores; i++)
    {
        numeros[valores[i]-1]++;
    }

    for (int i = 0; i < 2000; i++)
    {
        if (numeros[i] > 0)
        {
            printf("%d aparece %d vez(es)\n", i+1, numeros[i]);
        }
    } 

    return 0;
}