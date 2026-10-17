#include <stdio.h>

    int main(void) {

    int increased_population = 9870;
    int growth, count_years;

    do
    {
        growth = increased_population *0.1;

        increased_population = increased_population+growth;
        count_years++;
        printf("antal indbygger: %d, iteration: %d \n", increased_population, count_years);
    }
    while(increased_population < 30000);

    return 0;
}
