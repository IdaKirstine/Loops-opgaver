#include <stdio.h>

int main() {

    int m,n,k, sum = 0;


    printf("Enter bottom and top limit, as well as the division number:  \n");
    scanf("%d %d %d",&m,&n,&k);

    if (k <= 1) {
        printf("Division number must be greater than or equal to 1.");
    }

    for (int i = m; i <= n; i++) {
        if (i % k == 0) {
            sum = sum + i;

        }
    }

    printf("%d ",sum);

    return 0;





}
