#include <stdio.h>
int main(void) {
    int power = 1;
//int i = 1;
    /*while (i <= 10) {
        power = power * 2;
        i=i+1;
        printf("%5d", power);
    }

    printf("\n");
*/

    //omskrivning med for loop

    for (int i = 0; i < 10; ++i) {
        printf("%5d", power*=2);
    }

    printf("\n");

    return 0;
}

/*
 1 iteration: i = 1, p = 2;
 2: i = 2; p = 4;
 3; i = 3; p ? 8
 4: i = 4: p = 16:
 5: i = 5: p = 32:
 6: i = 6: p = 64
 7: i = 7: p = 128
 8: i = 8: p = 256:
 9: i = 9: p = 512:
 10:i = 10; p = 1024:

 Det passer!

Hvad sker der hvis ++i erstattes af i++?
    så ville løkken starte fra i=0 og så kører 11 iterationer
    fordi i++ bruger i værdi først og så incrementere, hvor ++i
    incrementere og så bruger i værdi

ved omskrivning retter jeg assingment af i = 0 til i = 1; og i loop condition
sætter jeg bare i, ikke ++i
så ændre jeg manuelt i's værdi i løkken til i = i+1
jeg ændre også powers værdi, til bare at blive power = power*2
hvorefter jeg printer ren power værdi

 */