#include <stdio.h>
#include <stdlib.h>

int main()
{
    int casos, alturas[211] = {0};
    int alt, maior;
    long long int nPessoas;

    scanf("%d", &casos);

    for (int i = 0; i < casos; i++)
    {
        scanf("%lli", &nPessoas);
        for (int j = 0; j < nPessoas; j++)
        {
            scanf("%d", &alt);

            if (alt > maior)
                maior = alt;

            alturas[alt - 20]++;
        }

        for (int i = 0; i < 211; i++)
        {
            while (alturas[i] > 0)
            {
                if (i == maior-20 && alturas[i] == 1)
                {
                    printf("%d", i + 20);
                }
                else
                {
                    printf("%d ", i + 20);
                }

                alturas[i]--;
            }
        }

        maior = 0;

        printf("\n");
    }

    return 0;
}