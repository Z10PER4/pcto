#include <stdio.h>
#include <unistd.h>

#define wait_time 1
#define text_time 50000

void gradual_text(const char *text)
{
    while (*text!='\0')
    {
        putchar(*text++);
        fflush(stdout);
        usleep(text_time);
    }
}

int main()
{
    char nomeai[100];
    char nometuoputtano[100];
    int progetto;
    int a;
    int fatto;
    int start;
    int arredo;
    int posizione_letto;
    int aaaa;
    printf("\033[0;36m");
    gradual_text("Ciao!\n");
    sleep(wait_time);
    gradual_text("Benvenuto nel tuo DREAM SPACE, un spazio virtuale dove potrai decidere tu stesso come progettare la tua futura abitazione!\n");
    sleep(wait_time);
    gradual_text("Io ti accompagnerò durante il tuo percorso fornendoti consigli e dati sull'illuminazione e sul flusso degli ambienti, e aiutandoti a comprendere meglio gli spazi\n");
    sleep(wait_time);
    gradual_text("Ma prima di tutto, come vuoi chiamarmi? ");
    scanf("%[^\n]s", nomeai);
    sleep(wait_time);
    gradual_text(nomeai);
    gradual_text("...mi piace!\n");
    gradual_text("Ora dimmi il tuo di nome: ");
    scanf("%s", nometuoputtano);
    sleep(wait_time);
    gradual_text("Perfetto! Ciao ");
    gradual_text(nometuoputtano);
    printf("\n");
    sleep(wait_time);
    gradual_text("Ora dimmi: sei già in possesso di un progetto oppure vuoi partire da zero? (1: si / 2: da zero): ");
    scanf(" %d", &progetto);
    if (progetto == 1)
    {
        sleep(wait_time);
        gradual_text("Inseriscilo allora nell'icona qui sotto (CLICCACI SOPRA E POI SCRIVI START E INVIA)\n");
        sleep(wait_time);
        printf("\n");
        printf("  (🛠️ )  \n");
        printf("\n");
        scanf(" %d", &a);
        sleep(wait_time);
        gradual_text("CARICAMENTO");
        sleep(wait_time);
        gradual_text(" 🔨");
        sleep(wait_time);
        gradual_text(" 🔨");
        sleep(wait_time);
        gradual_text(" 🔨\n");
        sleep(wait_time);
        gradual_text("Perfetto! Ora indossa il visore che cominciamo (INDOSSA IL VISORE E SCRIVI FATTO): \n");
        scanf("%d", &fatto);
        sleep(wait_time);
        gradual_text("Ok! Iniziamo allora visualizzando per prima la tua stanza\n");
        sleep(wait_time);
        gradual_text("Importazione della struttura attendere prego");
        sleep(wait_time);
        gradual_text(" 🔨");
        sleep(wait_time);
        gradual_text(" 🔨");
        sleep(wait_time);
        gradual_text(" 🔨\n");
        sleep(wait_time);
        printf("o(=(=(=(=)=)=)=)o\n"
        "!!!!!!}!{!!!!!!                                                ___ \n"
        "!!!!!} | {!!!!!                                               /   \\\n"
        "!!!!}  |  {!!!!     _!_     ()              ()     _!_       | //  |\n"
        "!!!'   |   '!!!    |~@~|    ||______________||    |~@~|      |     |\n"
        "~@~----+----~@~    |___|    |                |    |___|       \\___/\n"
        "!!!    |    !!!      |      |      ~@@~      |      |       _________\n"
        "!!!    |    !!!     ( )     |_______  _______|     ( )     |____-____|\n"
        "!!!____|____!!!  __(___)__  {__~@~__}{__~@~__}  __(___)__  |____-____|\n"
        "!!!=========!!!   |__-__|   %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%   |__-__|   |____-____|\n"
        "!!!_________!!!___|_____|_ %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% _|_____|___|____-____|_\n"
        "                  |     | %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% |     |   |/       \\|\n"
        "                         %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n"
        "                        %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n"
        "                       %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n"
        "                      /!!!!!!!!!!!!!!!!!!!!!!!!!!!!\\\n"
        "                      !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  \n"
        "                      !!!!!!!!!!!!!!!!!!!!!!!!!!lc!!\n"
        "                      `======~@~==========~@~======`\n"
        "                     `==============================`\n"
        "                    `====~@~==================~@~====`\n"
        "                   `==================================`\n"
        "                  `==~@~==========================~@~==`\n");
        sleep(wait_time);
        gradual_text("Fai pure un giro della stanza\nAppena hai fatto premi start (SCRIVI START)\n\n");
        scanf("%d", &start);
        gradual_text("Cominciamo!");
        sleep(wait_time);
        arredamento:
        gradual_text("Cosa vuoi cambiare?\n1: il letto\n2: i comodini\n3: la finestra\n4: lo specchio\n");
        scanf("%d", &arredo);
        if (arredo == 1)
        {
            sleep(wait_time);
            letto:
            gradual_text("Dove desideri spostarlo? (1: destra /2: sinistra)\n");
            scanf("%d", &posizione_letto);
            if (posizione_letto==1)
            {
                sleep(wait_time);
                gradual_text("Va bene così o preferisci annulare l'azione precedente? (1: va bene /2: no torna indietro)\n");
                scanf("%d", &aaaa);
                if (aaaa==1)
                {
                    sleep(1);
                    gradual_text("Perfetto! Allora adesso modifichiamo la posizione di altri elemneti della stanza\n");
                    goto arredamento;
                }
                else if (aaaa==2)
                {
                    goto letto;
                }
            }
            goto arredamento;
        }
    }
    
}