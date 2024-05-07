#include <stdio.h>
int main()
{
    int a;
    printf("Ao quanti anni c'hai?\n");
    scanf("%d", &a);
if ((a>0 && a<35)) //&& è "e", || è "o", ! è il contrario//
{
    printf("ao daje c'hai ancora tempo zi\n");
}
else if ((a>36 && a<100))
{
    printf("azz vechoo\n");
}
}