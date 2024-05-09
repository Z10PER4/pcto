#include<unistd.h>
#include<stdio.h>
int main()
{
    char nome1[50];
    int a, b, c, d, e, f, g, h, i;
    sleep(1);
    printf("Notte\n");
    sleep(1);
    printf("Non ho idea di che ore sono\n");
    sleep(2);
    printf("Controlla il telefono:\n");
    sleep(1);
    printf("1: si\n");
    sleep(1);
    printf("2: no\n");
    sleep(1);
    scanf("%d", &b);
    if (b==1)
        {
            sleep(1);
            printf("Sono le 4:00\n");
        }
    else if (b==2)
        {
            
        }
    sleep(1);
    printf("Non ho sonno, non so perché.\n");
    sleep(2);
    printf("Sento il peso del mio corpo ma non ne percepisco la stanchezza.\n");
    sleep(2);
    printf("Alzati\n");
    sleep(1);
    printf("1: Ora\n");
    sleep(1);
    printf("2: Tra dieci minuti\n");
    sleep(1);
    scanf("%d", &a);
    if (a==1)
    {

    }
    else if(a==2)
    {
        sleep(1);
        printf("Non ho sonno, a sto punto mi alzo lo stesso\n");
    }
    sleep(2);
    printf("Mi sento fiacco, come se avessi appena corso una maratona");
    printf(" ma ieri non ho neanche fatto gli straordinari a lavoro.\n");
    sleep(2);
    printf("Non vedo niente, è tutto buio, ma non fa paura...\n");
    sleep(2);
    printf("Si accende di colpo la luce, ma per qualche secondo non ");
    printf("riesco a vedere niente perché i miei occhi si erano abituati all'oscurità\n");
    sleep(3);
    printf("Mi gira la testa\n");
    sleep(2);
    printf("Vai in bagno a prendere una pasticca?\n");
    sleep(1);
    printf("1: Si\n");
    sleep(1);
    printf("2: No\n");
    sleep(1);
    scanf("%d", &c);
    if (c==1)
    {
        sleep(1);
        printf("Faccio per andare in bagno, ma aspetta...");
        sleep(2);
        printf("questa non è casa mia...dov'è finito il mio telefono?\n");
        sleep(2);
        printf("Ho per caso avuto un'allucinazione?\n");
    }
    else if(c==2)
    {
        sleep(2);
        printf("Aspetta...dove sono?\n");
        sleep(2);
        printf("questa non è casa mia...dov'è finito il mio telefono?\n");
        sleep(2);
        printf("Ho per caso avuto un'allucinazione?\n");
    }
    sleep(2);
    printf("Davanti a me si trova un corridoio senza porte né una fine visibile, ");
    printf("illuminato da una luce spenta ma fastidiosa, che mi disturba gli occhi.\n");
    sleep(3);
    printf("Adesso sì, sono un po' spaventato, anche perché chissà se sono stato drogato ");
    printf("e rapito da qualche matto, anche perché non mi ricordo niente...\n");
    sleep(3);
    printf("non mi ricordo...il mio nome?\n");
    sleep(2);
    printf("Come mi chiamo?\n");
    sleep(2);
    printf("So che lavoro faccio ma non il mio nome?\n");
    sleep(2);
    printf("Ce l'ho sulla punta della lingua ma non mi viene...\n");
    sleep(1);
    printf("Qual è il mio nome? ");
    sleep(1);
    scanf("%s", nome1);
    sleep(2);
    printf("Si...%s...ecco...credo...\n", nome1);
    sleep(2);
    printf("Vai avanti nel corridoio?\n");
    sleep(1);
    printf("1: si\n");
    sleep(1);
    printf("2: no\n");
    sleep(1);
    scanf("%d", &d);
    if (d==1)
    {
        sleep(2);
        printf("Sembra infinito, ma la paura al momento non mi permette di pensare RAZIONALMETE...");
        sleep(2);
        printf("Vedo una porta, socchiusa...");
        printf("Apri la porta?\n");
        sleep(1);
        printf("1: si\n");
        sleep(1);
        printf("2: no\n");
        sleep(1);
        scanf("%d", &e);
        if (e==1)
        {
            sleep(2);
            printf("Appena afferro la maniglia sento una scossa d'adredalina.\n");
            sleep(2);
            printf("Mi fermo, anche perché la paura e l'adrenalina sono così forti ");
            printf("che non riesco a muovere un  muscolo\n");
            sleep(2);
            printf("Fatti forza\n");
            sleep(1);
            printf("1: si\n");
            sleep(1);
            printf("2: no\n");
            sleep(1);
            scanf("%d", &f);
            if (f==2)
            {
                sleep(2);
                printf("Non posso farmi controllare così dalla paura.\n");
                sleep(2);
                printf("Non è da me.\n");
                sleep(2);
                printf("Aspetta.\n");
                sleep(2);
                printf("Cos'è da me?\n");
                sleep(2);
                printf("Fino a due secondi fa non mi ricordavo nemmeno il mio nome.\n");
                sleep(2);
                printf("Al momento mi sento passivo rispetto all’avvenimento dei fatti. ");
                sleep(2);
                printf("Provo sensazioni come la paura e lo sconforto.\n");
                sleep(2);
                printf("Ma sento che al momento non sia io a vivere tutto questo, ma che lo stia subendo.\n");
                sleep(2);
                printf("Non sono io il padrone delle mie azioni.\n");
                sleep(2);
                printf("C'è qualcosa che mi sta controllando ed io glielo lascio fare.\n");
                sleep(2);
                printf("O forse sono io che sto controllando il mio burattinaio?\n");
                sleep(2);
                printf("So che ciò che dico non è influenzato da lui.\n");
                sleep(2);
                printf("Non dipendo da nessuno, fanculo tutto questo.\n");
                sleep(2);
                printf("È solo un brutto sogno.\n");
                sleep(3);
                printf("Alzati\n");
                sleep(3);
                printf("SVEGLIA\n");
            }
            else if (f==1)
            {
                sleep(2);
                printf("Non si torna più indietro...\n");
                sleep(2);
                printf("Un altro corridoio\n");
                sleep(2);
                printf("Questo però ha una fine, e non è così corto, ");
                printf("anzi vedo pure qualcosa lì infondo\n");
                sleep(2);
                printf("È una persona\n");
                sleep(3);
                printf("1: avvicinati\n");
                sleep(1);
                printf("2: scappa\n");
                sleep(1);
                scanf("%d", &g);
                if (g==2)
                {
                    sleep(2);
                    printf("La porta dietro è scomparsa\n");
                    sleep(2);
                    printf("A sto punto mi avvicino\n");
                }
                else if (g==1)
                {

                }
                sleep(2);
                printf("Più mi avvicino più inizio a sentire una sensazione strana,\n");
                sleep(2);
                printf("come se conoscessi la persona davanti a me\n");
                sleep(3);
                printf("Ah\n");
                sleep(3);
                printf("Sono io\n");
                sleep(3);
                printf("Parlagli\n");
                sleep(1);
                printf("1: si\n");
                sleep(1);
                printf("2: no\n");
                sleep(1);
                scanf("%d", &h);
                if (h==2)
                {

                }
                else if (h==1)
                {
                    sleep(2);
                    printf("<Cosa sta succedendo?>\n");
                }
                sleep(2);
                printf("L'altro apre la bocca come se volesse dirmi qualcosa\n");
                sleep(2);
                printf("<Troppo tardi, non puoi più fare niente.\n");
                sleep(3);
                printf("Ci siamo rovinati con le nostre stesse mani.\n");
                sleep(3);
                printf("Anni e anni a correre dietro a desideri irrealizabili consapevoli della loro natura.\n");
                sleep(3);
                printf("Invece che proseguire con gli studi abbiamo deciso di correre dietro ");
                printf("ad una ragazza che non ci vedeva come noi vedevamo lei.\n");
                sleep(3);
                printf("E così il nostro equilibrio ci è crollato addosso.\n"); 
                sleep(3);
                printf("E tutte le nostre certezze si sono sgretolate.\n");
                sleep(3);
                printf("Tutto ciò per colpa nostra anzi...\n");
                sleep(3);
                printf("Per colpa tua.\n");
                sleep(3);
                printf("Si te sei la nostra parte irrazionale,sei sempre andato dietro a ragazze, beni materiali e quant'altro...\n");
                sleep(3);
                printf("Ma ora basta\n");
                sleep(3);
                printf("Fanculo tutto questo\n");
                sleep(3);
                printf("Ora tocca a me, non sopporto il tuo modo di fare, il nostro modo di essere\n");
                sleep(3);
                printf("Di relazionarci con gli altri, ma sopratutto non ti sopporto più...>\n");
                sleep(2);
                printf("Scappa\n");
                sleep(1);
                printf("1: si\n");
                sleep(2);
                printf("2: si\n");
                sleep(1);
                scanf("%d", &i);
                if ((i==1)||(i==2))
                {
                    sleep(3);
                    printf("<Non c'è via di fuga, non puoi scappare da te stesso...>\n");
                    sleep(2);
                    printf("NON PUOI VINCERE\n");
                    sleep(3);
                    printf("GAME OVER\n");
                    sleep(2);

                }
            }
        }
        else if(e==2)
        {
            sleep(2);
            printf("Non c'è nient'altro oltre alla porta\n");
            sleep(2);
            printf("A sto punto entro\n");
            sleep(2);
            printf("Appena afferro la maniglia sento una scossa d'adredalina.\n");
            sleep(2);
            printf("Mi fermo, anche perché la paura e l'adrenalina sono così forti ");
            printf("che non riesco a muovere un  muscolo\n");
            sleep(2);
            printf("Fatti forza\n");
            sleep(1);
            printf("1: si\n");
            sleep(1);
            printf("2: no\n");
            sleep(1);
            scanf("%d", &f);
            if (f==2)
            {
                sleep(2);
                printf("Non posso farmi controllare così dalla paura.\n");
                sleep(2);
                printf("Non è da me.\n");
                sleep(2);
                printf("Aspetta.\n");
                sleep(2);
                printf("Cos'è da me?\n");
                sleep(2);
                printf("Fino a due secondi fa non mi ricordavo nemmeno il mio nome.\n");
                sleep(2);
                printf("Al momento mi sento passivo rispetto all’avvenimento dei fatti. ");
                sleep(2);
                printf("Provo sensazioni come la paura e lo sconforto.\n");
                sleep(2);
                printf("Ma sento che al momento non sia io a vivere tutto questo, ma che lo stia subendo.\n");
                sleep(2);
                printf("Non sono io il padrone delle mie azioni.\n");
                sleep(2);
                printf("C'è qualcosa che mi sta controllando ed io glielo lascio fare.\n");
                sleep(2);
                printf("O forse sono io che sto controllando il mio burattinaio?\n");
                sleep(2);
                printf("So che ciò che dico non è influenzato da lui.\n");
                sleep(2);
                printf("Non dipendo da nessuno, fanculo tutto questo.\n");
                sleep(2);
                printf("È solo un brutto sogno.\n");
                sleep(3);
                printf("Alzati\n");
                sleep(3);
                printf("SVEGLIA\n");
            }
            else if (f==1)
            {
                sleep(2);
                printf("Non si torna più indietro...\n");
                sleep(2);
                printf("Un altro corridoio\n");
                sleep(2);
                printf("Questo però ha una fine, e non è così corto, ");
                printf("anzi vedo pure qualcosa lì infondo\n");
                sleep(2);
                printf("È una persona\n");
                sleep(3);
                printf("1: avvicinati\n");
                sleep(1);
                printf("2: scappa\n");
                sleep(1);
                scanf("%d", &g);
                if (g==2)
                {
                    sleep(2);
                    printf("La porta dietro è scomparsa\n");
                    sleep(2);
                    printf("A sto punto mi avvicino\n");
                }
                else if (g==1)
                {

                }
                sleep(2);
                printf("Più mi avvicino più inizio a sentire una sensazione strana,\n");
                sleep(2);
                printf("come se conoscessi la persona davanti a me\n");
                sleep(3);
                printf("Ah\n");
                sleep(3);
                printf("Sono io\n");
                sleep(3);
                printf("Parlagli\n");
                sleep(1);
                printf("1: si\n");
                sleep(1);
                printf("2: no\n");
                sleep(1);
                scanf("%d", &h);
                if (h==2)
                {

                }
                else if (h==1)
                {
                    sleep(2);
                    printf("<Cosa sta succedendo?>\n");
                }
                sleep(2);
                printf("L'altro apre la bocca come se volesse dirmi qualcosa\n");
                sleep(2);
                printf("<Troppo tardi, non puoi più fare niente.\n");
                sleep(3);
                printf("Ci siamo rovinati con le nostre stesse mani.\n");
                sleep(3);
                printf("Anni e anni a correre dietro a desideri irrealizabili consapevoli della loro natura.\n");
                sleep(3);
                printf("Invece che proseguire con gli studi abbiamo deciso di correre dietro ");
                printf("ad una ragazza che non ci vedeva come noi vedevamo lei.\n");
                sleep(3);
                printf("E così il nostro equilibrio ci è crollato addosso.\n"); 
                sleep(3);
                printf("E tutte le nostre certezze si sono sgretolate.\n");
                sleep(3);
                printf("Tutto ciò per colpa nostra anzi...\n");
                sleep(3);
                printf("Per colpa tua.\n");
                sleep(3);
                printf("Si te sei la nostra parte irrazionale,sei sempre andato dietro a ragazze, beni materiali e quant'altro...\n");
                sleep(3);
                printf("Ma ora basta\n");
                sleep(3);
                printf("Fanculo tutto questo\n");
                sleep(3);
                printf("Ora tocca a me, non sopporto il tuo modo di fare, il nostro modo di essere\n");
                sleep(3);
                printf("Di relazionarci con gli altri, ma sopratutto non ti sopporto più...>\n");
                sleep(2);
                printf("Scappa\n");
                sleep(1);
                printf("1: si\n");
                sleep(2);
                printf("2: si\n");
                sleep(1);
                scanf("%d", &i);
                if ((i==1)||(i==2))
                {
                    sleep(3);
                    printf("<Non c'è via di fuga, non puoi scappare da te stesso...>\n");
                    sleep(2);
                    printf("NON PUOI VINCERE\n");
                    sleep(3);
                    printf("GAME OVER\n");
                    sleep(2);
                }
            }    
        }
    }
    else if (d==2)
    {
        sleep(2);
        printf("Mi giro, dietro di me c'è una porta.\n");
        sleep(2);
        printf("Strano, sembra socchiusa.\n");
        sleep(1);
        printf("Apri la porta?\n");
        sleep(1);
        printf("1: si\n");
        sleep(1);
        printf("2: no\n");
        sleep(1);
        scanf("%d", &e);
        if (e==1)
        {
            sleep(2);
            printf("Appena afferro la maniglia sento una scossa d'adredalina.\n");
            sleep(2);
            printf("Mi fermo, anche perché la paura e l'adrenalina sono così forti ");
            printf("che non riesco a muovere un  muscolo\n");
            sleep(2);
            printf("Fatti forza\n");
            sleep(1);
            printf("1: si\n");
            sleep(1);
            printf("2: no\n");
            sleep(1);
            scanf("%d", &f);
            if (f==2)
            {
                sleep(2);
                printf("Non posso farmi controllare così dalla paura.\n");
                sleep(2);
                printf("Non è da me.\n");
                sleep(2);
                printf("Aspetta.\n");
                sleep(2);
                printf("Cos'è da me?\n");
                sleep(2);
                printf("Fino a due secondi fa non mi ricordavo nemmeno il mio nome.\n");
                sleep(2);
                printf("Al momento mi sento passivo rispetto all’avvenimento dei fatti. ");
                sleep(2);
                printf("Provo sensazioni come la paura e lo sconforto.\n");
                sleep(2);
                printf("Ma sento che al momento non sia io a vivere tutto questo, ma che lo stia subendo.\n");
                sleep(2);
                printf("Non sono io il padrone delle mie azioni.\n");
                sleep(2);
                printf("C'è qualcosa che mi sta controllando ed io glielo lascio fare.\n");
                sleep(2);
                printf("O forse sono io che sto controllando il mio burattinaio?\n");
                sleep(2);
                printf("So che ciò che dico non è influenzato da lui.\n");
                sleep(2);
                printf("Non dipendo da nessuno, fanculo tutto questo.\n");
                sleep(2);
                printf("È solo un brutto sogno.\n");
                sleep(3);
                printf("Alzati\n");
                sleep(3);
                printf("SVEGLIA\n");
            }
            else if (f==1)
            {
                printf("Non si torna più indietro...\n");
                sleep(2);
                printf("Un altro corridoio\n");
                sleep(2);
                printf("Questo però ha una fine, e non è così corto, ");
                printf("anzi vedo pure qualcosa lì infondo\n");
                sleep(2);
                printf("È una persona\n");
                sleep(3);
                printf("1: avvicinati\n");
                sleep(1);
                printf("2: scappa\n");
                sleep(1);
                scanf("%d", &g);
                if (g==2)
                {
                    sleep(2);
                    printf("La porta dietro è scomparsa\n");
                    sleep(2);
                    printf("A sto punto mi avvicino\n");
                }
                else if (g==1)
                {

                }
                sleep(2);
                printf("Più mi avvicino più inizio a sentire una sensazione strana,\n");
                sleep(2);
                printf("come se conoscessi la persona davanti a me\n");
                sleep(3);
                printf("Ah\n");
                sleep(3);
                printf("Sono io\n");
                sleep(3);
                printf("Parlagli\n");
                sleep(1);
                printf("1: si\n");
                sleep(1);
                printf("2: no\n");
                sleep(1);
                scanf("%d", &h);
                if (h==2)
                {

                }
                else if (h==1)
                {
                    sleep(2);
                    printf("<Cosa sta succedendo?>\n");
                }
                sleep(2);
                printf("L'altro apre la bocca come se volesse dirmi qualcosa\n");
                sleep(2);
                printf("<Troppo tardi, non puoi più fare niente.\n");
                sleep(3);
                printf("Ci siamo rovinati con le nostre stesse mani.\n");
                sleep(3);
                printf("Anni e anni a correre dietro a desideri irrealizabili consapevoli della loro natura.\n");
                sleep(3);
                printf("Invece che proseguire con gli studi abbiamo deciso di correre dietro ");
                printf("ad una ragazza che non ci vedeva come noi vedevamo lei.\n");
                sleep(3);
                printf("E così il nostro equilibrio ci è crollato addosso.\n"); 
                sleep(3);
                printf("E tutte le nostre certezze si sono sgretolate.\n");
                sleep(3);
                printf("Tutto ciò per colpa nostra anzi...\n");
                sleep(3);
                printf("Per colpa tua.\n");
                sleep(3);
                printf("Si te sei la nostra parte irrazionale,sei sempre andato dietro a ragazze, beni materiali e quant'altro...\n");
                sleep(3);
                printf("Ma ora basta\n");
                sleep(3);
                printf("Fanculo tutto questo\n");
                sleep(3);
                printf("Ora tocca a me, non sopporto il tuo modo di fare, il nostro modo di essere\n");
                sleep(3);
                printf("Di relazionarci con gli altri, ma sopratutto non ti sopporto più...>\n");
                sleep(2);
                printf("Scappa\n");
                sleep(1);
                printf("1: si\n");
                sleep(2);
                printf("2: si\n");
                sleep(1);
                scanf("%d", &i);
                if ((i==1)||(i==2))
                {
                    sleep(3);
                    printf("<Non c'è via di fuga, non puoi scappare da te stesso...>\n");
                    sleep(2);
                    printf("NON PUOI VINCERE\n");
                    sleep(3);
                    printf("GAME OVER\n");
                    sleep(2);
                }
            }
        }
        else if (e==2)
        {
            sleep(2);
            printf("Torno indietro, mo proseguo per il corridoio che fa meno paura...\n");
            sleep(2);
            printf("Sembra infinito, ma la paura al momento non mi permette di pensare RAZIONALMETE...");
            sleep(2);
            printf("Vedo una porta, socchiusa...");
            printf("Apri la porta?\n");
            sleep(1);
            printf("1: si\n");
            sleep(1);
            printf("2: no\n");
            sleep(1);
            scanf("%d", &e);
            if (e==1)
            {
                sleep(2);
                printf("Appena afferro la maniglia sento una scossa d'adredalina.\n");
                sleep(2);
                printf("Mi fermo, anche perché la paura e l'adrenalina sono così forti ");
                printf("che non riesco a muovere un  muscolo\n");
                sleep(2);
                printf("Fatti forza\n");
                sleep(1);
                printf("1: si\n");
                sleep(1);
                printf("2: no\n");
                sleep(1);
                scanf("%d", &f);
                if (f==2)
                {
                    sleep(2);
                    printf("Non posso farmi controllare così dalla paura.\n");
                    sleep(2);
                    printf("Non è da me.\n");
                    sleep(2);
                    printf("Aspetta.\n");
                    sleep(2);
                    printf("Cos'è da me?\n");
                    sleep(2);
                    printf("Fino a due secondi fa non mi ricordavo nemmeno il mio nome.\n");
                    sleep(2);
                    printf("Al momento mi sento passivo rispetto all’avvenimento dei fatti. ");
                    sleep(2);
                    printf("Provo sensazioni come la paura e lo sconforto.\n");
                    sleep(2);
                    printf("Ma sento che al momento non sia io a vivere tutto questo, ma che lo stia subendo.\n");
                    sleep(2);
                    printf("Non sono io il padrone delle mie azioni.\n");
                    sleep(2);
                    printf("C'è qualcosa che mi sta controllando ed io glielo lascio fare.\n");
                    sleep(2);
                    printf("O forse sono io che sto controllando il mio burattinaio?\n");
                    sleep(2);
                    printf("So che ciò che dico non è influenzato da lui.\n");
                    sleep(2);
                    printf("Non dipendo da nessuno, fanculo tutto questo.\n");
                    sleep(2);
                    printf("È solo un brutto sogno.\n");
                    sleep(3);
                    printf("Alzati\n");
                    sleep(3);
                    printf("SVEGLIA\n");
                }
                else if (f==1)
                {
                    sleep(2);
                    printf("Non si torna più indietro...\n");
                    sleep(2);
                    printf("Un altro corridoio\n");
                    sleep(2);
                    printf("Questo però ha una fine, e non è così corto, ");
                    printf("anzi vedo pure qualcosa lì infondo\n");
                    sleep(2);
                    printf("È una persona\n");
                    sleep(3);
                    printf("1: avvicinati\n");
                    sleep(1);
                    printf("2: scappa\n");
                    sleep(1);
                    scanf("%d", &g);
                    if (g==2)
                    {
                        sleep(2);
                        printf("La porta dietro è scomparsa\n");
                        sleep(2);
                        printf("A sto punto mi avvicino\n");
                    }
                    else if (g==1)
                    {
                    
                    }
                    sleep(2);
                    printf("Più mi avvicino più inizio a sentire una sensazione strana,\n");
                    sleep(2);
                    printf("come se conoscessi la persona davanti a me\n");
                    sleep(3);
                    printf("Ah\n");
                    sleep(3);
                    printf("Sono io\n");
                    sleep(3);
                    printf("Parlagli\n");
                    sleep(1);
                    printf("1: si\n");
                    sleep(1);
                    printf("2: no\n");
                    sleep(1);
                    scanf("%d", &h);
                    if (h==2)
                    {

                    }
                    else if (h==1)
                    {
                        sleep(2);
                        printf("<Cosa sta succedendo?>\n");
                    }
                    sleep(2);
                    printf("L'altro apre la bocca come se volesse dirmi qualcosa\n");
                    sleep(2);
                    printf("<Troppo tardi, non puoi più fare niente.\n");
                    sleep(3);
                    printf("Ci siamo rovinati con le nostre stesse mani.\n");
                    sleep(3);
                    printf("Anni e anni a correre dietro a desideri irrealizabili consapevoli della loro natura.\n");
                    sleep(3);
                    printf("Invece che proseguire con gli studi abbiamo deciso di correre dietro ");
                    printf("ad una ragazza che non ci vedeva come noi vedevamo lei.\n");
                    sleep(3);
                    printf("E così il nostro equilibrio ci è crollato addosso.\n"); 
                    sleep(3);
                    printf("E tutte le nostre certezze si sono sgretolate.\n");
                    sleep(3);
                    printf("Tutto ciò per colpa nostra anzi...\n");
                    sleep(3);
                    printf("Per colpa tua.\n");
                    sleep(3);
                    printf("Si te sei la nostra parte irrazionale,sei sempre andato dietro a ragazze, beni materiali e quant'altro...\n");
                    sleep(3);
                    printf("Ma ora basta\n");
                    sleep(3);
                    printf("Fanculo tutto questo\n");
                    sleep(3);
                    printf("Ora tocca a me, non sopporto il tuo modo di fare, il nostro modo di essere\n");
                    sleep(3);
                    printf("Di relazionarci con gli altri, ma sopratutto non ti sopporto più...>\n");
                    sleep(2);
                    printf("Scappa\n");
                    sleep(1);
                    printf("1: si\n");
                    sleep(2);
                    printf("2: si\n");
                    sleep(1);
                    scanf("%d", &i);
                    if ((i==1)||(i==2))
                    {
                        sleep(3);
                        printf("<Non c'è via di fuga, non puoi scappare da te stesso...>\n");
                        sleep(2);
                        printf("NON PUOI VINCERE\n");
                        sleep(3);
                        printf("GAME OVER\n");
                        sleep(2);
                    }
                }
            }
        }
    }
}