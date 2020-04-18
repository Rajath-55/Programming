#include<stdio.h>
int main(){
	char ch;
	scanf("%c", &ch);
	ch^=((1<<5)|(1<<7));
	ch^=((1<<4)|(1<<6));
	ch^=((1<<3)|(1<<5));
	ch^=((1<<2)|(1<<4));
	ch^=((1<<1)|(1<<3));
	ch^=((1<<0)|(1<<2));
	printf("%c\n", ch);
	return(0);
}