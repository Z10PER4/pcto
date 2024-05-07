#include <stdio.h>
#include <unistd.h>

int main()
{
    int a;
    int risposta;
    
    sleep(1);
    printf("Ehi tu giovine, non credo tu abbia l'età per farti. Quanti anni hai?\n");
    sleep(1);
    printf("inserisci la tua età: ");
    scanf("%d", &a);
    sleep(1);
    if (a>18)
    {
        printf("Ma che me stai a pija per culo?\n");
        sleep(2);
        printf("1: ohibò, io grullo che son io peccai de menti\n");
        sleep(2);
        printf("2: ao cazzo vuoi che nn sembro maggiorenne?\n");
        sleep(1);
        printf("scegli una delle due risposte proposte qui sopra: ");
        scanf(" %d", &risposta);
        if (risposta == 1)
        {
            sleep(1);
            printf("Meo giovine compatriota, me disp ma allora la tua coca che me garba io ti sequestrerò\n");
        }
        else if (risposta == 2)
        {
            sleep(2);
            printf("AOONONONONONMEQUERELATELALASCIOLACOCS\n");
        }
    }
    else if (a==18)
    {
        printf("Ma che me stai a pija per culo?\n");
        sleep(2);
        printf("1: ohibò, io grullo che son io peccai de menti\n");
        sleep(2);
        printf("2: ao cazzo vuoi che nn sembro maggiorenne?\n");
        sleep(1);
        scanf(" %d", &risposta);
        if (risposta == 1)
        {
            sleep(1);
            printf("Meo giovine compatriota, me disp ma allora la tua coca che me garba io ti sequestrerò\n");
        }
        else if (risposta == 2)
        {
            sleep(2);
            printf("AOONONONONONMEQUERELATELALASCIOLACOCS\n");
        }
    }
    else
    {
        sleep(1);
        printf("Ao guarda che allora nte puoi fa de coca, spiaze ma te la ciulo e te rubo pure er pipo\n");
    }
}