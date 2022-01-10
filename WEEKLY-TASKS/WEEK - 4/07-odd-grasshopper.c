// Odd Grasshopper : 

#include <stdio.h>
#include <stdlib.h>

void main() {
    int t, x, n, testCount;
    long oddCount, evenCount;
    short dirFlag;
    scanf("%d", &t);
    testCount = t;
    int *res = (int *) malloc(t * sizeof(int));

    while(t > 0) {
        scanf("%d %d", &x, &n);
        dirFlag = x & 1 == 1 ? 1 : -1;
        oddCount = 0;
        evenCount = 0;
        for(int i = 1 ; i <= n ; i++) {
            if(i % 4 < 2)
                oddCount += i;
            else
                evenCount += i;
        }

        if(dirFlag == -1)
            oddCount *= -1;
        else
            evenCount *= -1;

        res[testCount - t--] = x + oddCount + evenCount;
    }

    for(int i = 0 ; i < testCount ; i++)
        printf("%d\n", res[i]);
}