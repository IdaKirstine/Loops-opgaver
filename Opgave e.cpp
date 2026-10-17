#include <stdio.h>

int main(void) {
    int i, j, small, large, remainder;

    printf("Enter two positive integers: ");
    scanf("%d %d", &i, &j);

    small = i <= j ? i : j;
    large = i <= j ? j : i;

    while (small > 0) {
        remainder = large % small;
        large = small;
        small = remainder;
    }

    printf("GCD of %d and %d is %d\n\n", i, j, large);

    return 0;
}

/*Koden ville fungere fint selvom man byttede om på small og large.
 * det ville den fordi at mudolo, gemmer resten. Så hvis tilfældet f.eks. er
 * 5%10, hvor man tænker hvor mange gange går 10 op i 5, jamen det er 0
 * så er resten vel 5. Altså bliver remainderen small værdien. og derfor
 * retter koden sig selv på en måde
 */