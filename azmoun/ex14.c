#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d", &a);
    int numeri[5]={7,14,44,99,-31};//da 0 a 4//
    int i=0;
    while (i<5)//5 perché la lunghezza de numeri//
    {
        printf("%d\n", numeri[i]);
        i=i+1;
    }
}
