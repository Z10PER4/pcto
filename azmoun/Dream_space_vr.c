#include <stdio.h>
#include <unistd.h>
#include <wchar.h>

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
    char a[50];
    char b[50];
    char c[50];
    char d[50];
    char start[100];
    char nomeai[100];
    char nometuoputtano[100];
    int fine;
    int progetto;
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
    scanf("%s", nomeai);
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
        scanf("%s", a);
        sleep(wait_time);
        gradual_text("CARICAMENTO");
        sleep(wait_time);
        gradual_text(" 🔨");
        sleep(wait_time);
        gradual_text(" 🔨");
        sleep(wait_time);
        gradual_text(" 🔨\n");
        sleep(wait_time);
        gradual_text("Perfetto! Ora indossa il visore che cominciamo (INDOSSA IL VISORE E SCRIVI FATTO): ");
        sleep(wait_time);
        scanf(" %s", b);
    }
    else if (progetto == 2)
    {
        sleep(wait_time);
        gradual_text("Non c'è problema allora\nMettiti il visore e premi start che così inizio la scannerizzazione dell'ambiente intorno a te per permetterti di customizzarlo a tuo piacimento\n");
        sleep(wait_time);
        gradual_text("(INDOSSA IL VISORE E SCRIVI START): ");
        scanf("%s", d);
    }
    
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
    sleep(2);
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
    sleep(3);
    gradual_text("Fai pure un giro della stanza\nAppena hai fatto premi start (SCRIVI START):");
    sleep(wait_time);
    scanf(" %s", c);
    sleep(wait_time);
    gradual_text("Cominciamo!\n");
    sleep(wait_time);
    arredamento:
    gradual_text("Cosa vuoi cambiare?\n1: il letto\n2: i comodini\n3: la finestra\n4: lo specchio\n");

    scanf(" %d", &progetto);
    
    if (progetto == 1)
    {
        sleep(wait_time);
        spostare:
        gradual_text("Dove desideri spostare l'arredo? (1: destra /2: sinistra)\n");
         scanf("%d", &posizione_letto);
        if (posizione_letto==1)
        {
            sleep(wait_time);
            gradual_text("Va bene così o preferisci annulare l'azione precedente? (1: va bene /2: no torna indietro)\n");
            scanf("%d", &aaaa);
            if (aaaa==1)
            {
                sleep(1);
                gradual_text("Perfetto! Allora adesso vuoi modificare la posizione di altri elemeneti della stanza o concludere la simulazione e salvare il progetto?\n");
                gradual_text("(1: continua a modificare /2: salva il progetto): ");
                scanf("%d", &fine);
                if (fine == 1)
                {
                    goto arredamento;
                }
                else if (fine == 2)
                {
                    sleep(1);
                    gradual_text("salvataggio in corso attendere prego");
                    sleep(wait_time);
                    gradual_text(" 🔨");
                    sleep(wait_time);
                    gradual_text(" 🔨");
                    sleep(wait_time);
                    gradual_text(" 🔨\n");
                    sleep(2);
                    gradual_text("Salvataggio concluso con successo!\nOra ");
                    gradual_text(nometuoputtano);
                    gradual_text(", purtroppo la versione di prova finisce qui, ma se l'app ti ha stuzzicato l'interesse lasciaci una buona recensione e aspetta che esca la versione definitiva\nGrazie per aver provato l'app ed arrivederci ");
                    gradual_text(nometuoputtano);
                    printf("\n");
                }
            }
            else if (aaaa==2)
            {
                goto spostare;
            }
        }
        else if (posizione_letto==2)
        {
            sleep(1);
            gradual_text("Perfetto! Allora adesso vuoi modificare la posizione di altri elemeneti della stanza o concludere la simulazione e salvare il progetto?\n");
            gradual_text("(1: continua a modificare /2: salva il progetto): ");
            scanf("%d", &fine);
            if (fine == 1)
            {
                goto arredamento;
            }
            else if (fine == 2)
            {
                sleep(1);
                gradual_text("salvataggio in corso attendere prego");
                sleep(wait_time);
                gradual_text(" 🔨");
                sleep(wait_time);
                gradual_text(" 🔨");
                sleep(wait_time);
                gradual_text(" 🔨\n");
                sleep(2);
                gradual_text("Salvataggio concluso con successo!\nOra ");
                gradual_text(nometuoputtano);
                gradual_text(", purtroppo la versione di prova finisce qui, ma se l'app ti ha stuzzicato l'interesse lasciaci una buona recensione e aspetta che esca la versione definitiva\nGrazie per aver provato l'app ed arrivederci ");
                gradual_text(nometuoputtano);
                printf("\n");
            }
            
            else if (aaaa==2)
            {
                goto spostare;
            }
        }   
    } 
    else if (progetto==2)
    {
        sleep(1);
        goto spostare;
    }
    else if (progetto==3)
    {
        sleep(1);
        goto spostare;
    }
    else if (progetto==4)
    {
        sleep(1);
        goto spostare;
    }
}