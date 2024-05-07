#include <stdio.h>
#include <unistd.h>

int main()
{
    //1969 anno di riferimento//
    char a = '1';
    char b = '2';
    char risposta;
    sleep(1);
    printf("L'uomo sulla Luna c'è andato per la prima volta nel 1969. Per caso te sei nato/a nello stesso anno?\n");
    sleep(1);
    printf("1: si\n");
    sleep(1);
    printf("2: no\n");
    scanf("%c", &risposta);
    if (risposta == a)
    {
        sleep(1);
        printf("Ao daje\n");
    }
    else
    {
        int c;
        sleep(1);
        printf("Allora in che anno sei nato/a?\n");
        scanf("%d", &c);
        if(c>1969)
        {
            sleep(1);
            printf("Allora sei nato/a %d anni dopo lo sbarco sulla Luna\n", c-1969);
        }
        else
        {
            sleep(1);
            printf("Allora sei nato/a %d anni dopo lo sbarco sulla Luna\n", 1969-c);
        }   
    }

    
}
