#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		for(int j=0;j<n-i;j++){
			printf("--");
		}
		if(i==1){
		printf("*");
	    }  
		for(int k=0;k<2*(i-1);k++){
			printf("*-");
		}
		for(int j=0;j<2*(n-i);j++){
			printf("--");
		}








		printf("*\n");
	}
}