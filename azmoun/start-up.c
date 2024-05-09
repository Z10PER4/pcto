#include <stdio.h>
#include <unistd.h>
void gradual_text(const char *text)
{
    while (*text!='\0')
    {
        putchar(*text++);
        fflush(stdout);
        usleep(50000);
    }
}
int main()
{
    char nomeai[100];
    char nometuoputtano[100];
    printf("\033[0;36m");
    gradual_text("Ciao!\n");
    sleep(1);
    gradual_text("Benvenuto nel tuo DREAM SPACE, un spazio virtuale dove potrai decidere tu stesso come progettare la tua futura abitazione!\n");
    sleep(1);
    gradual_text("Io ti accompagnerò durante il tuo percorso fornendoti consigli e dati sull'illuminazione e sul flusso degli ambienti, e aiutandoti a comprendere meglio gli spazi\n");
    sleep(1);
    gradual_text("Ma prima di tutto, come vuoi chiamarmi? ");
    scanf("%[^\n]s", nomeai);
    sleep(1);
    gradual_text(nomeai);
    gradual_text("...mi piace!\n");
    gradual_text("Ora dimmi il tuo di nome\n");
    scanf("%s", nometuoputtano);
    sleep(1);
    gradual_text("Perfetto! Ciao ");
    gradual_text(nometuoputtano);
    printf("\n");
    sleep(1);
    
}