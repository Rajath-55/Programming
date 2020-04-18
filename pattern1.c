#include<stdio.h>
int main(){
	int n,j,c;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(j=1;j<n-i;j++){
			printf(" ");
		}
		for(int k=0;k<=i;k++){
			if(k==0||i==0){
				c=1;
			}else{
				c=c*(i-k+1)/k;

			}
			printf("%2d", c);
		}
		printf("\n");

	}



}