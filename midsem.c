#include<stdio.h>
int main()
{
	int n;
	char ch;
	// do{
	 	scanf("%d", &n);
		int t;
		
		if(n<=10){
			printf("Invalid Input. Number of matchsticks must be greater than 10\n");
			scanf("%d", &n);
		}
		if(n%5==1){
			printf("Player wins the toss and plays first\n");
			

		}else if (n%5==2){
			printf("Computer won the toss and plays first\n");
			printf("Computer picked 1 matchstick");
			n-=1;
			printf("No of matchsticks remaining = %d\n", n);
		}else if(n%5==3){
			printf("Computer won the toss and plays first\n");
			printf("Computer picked 2 matchsticks");
			n-=2;
			printf("No of matchsticks remaining = %d\n", n);
		}else if(n%5==4){
			printf("Computer won the toss and plays first\n");
			printf("Computer picked 3 matchsticks");
			n-=3;
			printf("No of matchsticks remaining = %d\n", n);
		}else if (n%5==0){
			printf("Computer won the toss and plays first\n");
			printf("Computer picked 4 matchsticks");
			n-=4;
			printf("No of matchsticks remaining = %d\n", n);
		}
		while(n>1){
			scanf("%d", &t);
			if(t>4){
				printf("Invalid pick\n");
				scanf("%d", &t);

			}
			if(t<=4){
			int r=5-t;
			printf("Computer picked %d matchsticks\n", r);
			printf("No of matchsticks remaining = %d\n", n-r-t);
			n-=(r+t);	
			}		
		}
		if(n==1){
			printf("Computer wins!\n");

		}
		printf("Do you want to continue? Press y or n\n");
		scanf("%c", &ch);

	// }while(ch=='y'||ch=='Y');
}