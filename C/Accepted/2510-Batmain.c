#include <stdio.h>
#include <string.h>
 
int main() {
    int casosTeste;
    char vilao[26];
    
    scanf("%i", &casosTeste);
    
    for(int i=0; i<casosTeste; i++)
    {
        scanf("%s", vilao);
        printf("Y\n");
    }
    
 
    return 0;
}