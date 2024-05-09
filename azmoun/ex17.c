#include <stdio.h>
#include <unistd.h>
int main()
{
    printf("\033[0;36m");
    char stocazzo[100];
    int i = 0;
    printf("Inserisci il messaggio\n");
    fgets(stocazzo, sizeof(stocazzo), stdin);
    while (stocazzo[i] != '\0')
    {
        printf("%c", stocazzo[i]);
        fflush(stdout);
        usleep(125000);
        i++;
    }
}

