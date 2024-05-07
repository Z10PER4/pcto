#include <stdio.h>
int main()
{
    printf("inserisci due numeri: \n");
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
if (a>b)
{
    printf("a è > di b");
}
else if (a==b)
{
    printf("a è uguale a b");
}
else
{
    printf("a è minore di b");
}
}