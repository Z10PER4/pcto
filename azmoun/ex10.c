#include <stdio.h>
#include <unistd.h>
int main()
{
    int a, b, c;
    printf("inserisci tre numeri che determinino la lunghezza dei lati di un triangolo\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    if (a+b>c && b+c>a && c+a>b)
    {
        printf("Le misure date possono essere la lunghezza dei lati del triangolo\n");
    }

    else
    {
        printf("le misure non possono essere la lunghezza dei lati del triangolo\n");
    }
}