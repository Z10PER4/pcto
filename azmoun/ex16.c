#include <stdio.h>
int main()
{
    char nome[5]={'s','a','r','a','\0'};
    int i=0;
    while(nome[i]!='\0')
    {
        printf("%c",nome[i]);//posso pure fare printf("s", nome); scrivendo prima char nome[]="";//
        i=i+1;
    }
    printf("\n");
    char nomeutente[50];
    scanf("%[^\n]s", nomeutente);//qui quindi si può usare pure scanf("%c", &nomeutente[s])
    printf("nome utente: %s\n", nomeutente);
}