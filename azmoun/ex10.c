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
        if (a==b && b==c)
        {
            printf("Le misure date possono essere la lunghezza dei lati di triangolo equilatero\n");
        }
        else if ((a==b && a!=c)||(a==c && c!=b)||(b==c && b!=a))
        {
            printf("le misure date possono essere la lunghezza dei lati di un triangolo isoscele\n");
        }
        else
        {
            printf("Le misure date possono essere la lunghezza dei lati del triangolo scaleno\n"); 
        }
    }
    else
    {
        printf("le misure date non possono essere la lunghezza dei lati di un triangolo\n");
    }
}