#include <stdio.h>

int main(void) {
	int n,k,i; 
	scanf("%d %d", &n, &k);
    int a[n];
    for(i=0; 2*i + 1<n; i++){
        a[i]= 2*i + 1;
    }
    for(int j=0; 2*j<=n; j++){
        a[i+1+j]= 2*i;
    }
    printf("%d", a[k]);
	return 0;
}