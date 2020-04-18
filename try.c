#include<stdio.h>
int main()
{
    int num,i=0,k,temp,digit,ans=0;
    printf("enter a number");
    scanf("%d",&num);
    while(i<=num)
    {
        k=num%8;
        num=num/8;
        i++;
    }
    printf ("%d\n", k);
    temp=k;
    while(k!=0)
    {
        digit=k%10;
        ans=ans*10+digit;
        k=k/10;
    }
    printf("octal= %d\n",ans);
}