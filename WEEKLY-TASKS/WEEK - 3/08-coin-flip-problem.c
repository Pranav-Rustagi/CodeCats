// Codechef problem
// Problem code : CONFLIP

#include <stdio.h>

int main(void) {
	int T, G, I, N, Q;
	scanf("%d", &T);
	while(T != 0) {
	    scanf("%d", &G);
	    while(G != 0) {
	        scanf("%d %d %d", &I, &N, &Q);
	        
	        int res = N >> 1;
	        
	        if((N & 1) == 0 || (I == Q))
	            printf("%d\n", res);
	        else
	            printf("%d\n", res + 1);
	        G--;
	    }
	    T--;
	}
	return 0;
}