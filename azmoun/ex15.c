#include <stdio.h>
int main()
{
    int num2[100];//array
    int b=0;
    while (b<100)
    {
        printf("inserisci un numero\n");
        scanf("%d", &num2[b]);
        b=b+1;
    }
}