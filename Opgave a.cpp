#include <stdio.h>


int main(void) {

    int n, sum=0;
    int sum_formula=0;

    printf("Indtast vilkårlig n værdi\n");
    scanf("%d",&n);

    //summer summen med en for løkke, fordi vi ved antal iterationer
    for(int i = 1; i <= n; i++)
    {
        sum = sum+i;
        printf("%d \n",sum);
    }

    sum_formula = (n*(n+1))/2;

    if (sum_formula == sum){
        printf("Values are the same\n");
    }else
    {
        printf("Values are not the same\n");
    }
    return 0;
}
