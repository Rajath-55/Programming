#include<stdio.h>
#include<stdlib.h>
void playgame(){
  int N,X,Y;
  scanf("%d", &N);
  if (N<10){
      printf("Invalid Input. Number of matchsticks must be greater than 10\n");
      scanf("%d", &N);
 
  }
 
  if(N%5==1){
      printf("Player wins the toss and plays first\n");
 
  }
  else if(N%5==2){
      printf("computer wins the toss and plays first\n");
      printf("Computer picked 1 matchsticks\n");
      N=N-1;
  }
  else if(N%5==3){
      printf("computer wins the toss and plays first\n");
      printf("Computer picked 2 matchsticks\n");
      N=N-2;
  }
  else if(N%5==4){
      printf("computer wins the toss and plays first\n");
      printf("Computer picked 3 matchsticks\n");
      N=N-3;
  }
  else if(N%5==0){
      printf("computer wins the toss and plays first\n");
      printf("Computer picked 4 matchsticks\n");
      N=N-4;
  }
  while(N>1){
       scanf("%d",&X);
       while(X>4){
           printf("Invalid pick\n");
           scanf("%d",&X);
       }
       Y=5-X;
       printf("Computer picked %d matchsticks\n", Y);
       N=N-Y-X;
       printf("Remaining:%d\n",N);
 
  }
  printf("Computer wins!\n");
}
 
int main()
{
    // int N,X,Y;
    // scanf("%d", &N);
    // if (N<10){
    //     printf("Invalid Input. Number of matchsticks must be greater than 10\n");
    //     scanf("%d", &N);
    //
    // }
    //
    // if(N%5==1){
    //     printf("Player wins the toss and plays first\n");
    //
    // }
    // else if(N%5==2){
    //     printf("computer wins the toss and plays first\n");
    //     printf("Computer picked 1 matchsticks\n");
    //     N=N-1;
    // }
    // else if(N%5==3){
    //     printf("computer wins the toss and plays first\n");
    //     printf("Computer picked 2 matchsticks\n");
    //     N=N-2;
    // }
    // else if(N%5==4){
    //     printf("computer wins the toss and plays first\n");
    //     printf("Computer picked 3 matchsticks\n");
    //     N=N-3;
    // }
    // else if(N%5==0){
    //     printf("computer wins the toss and plays first\n");
    //     printf("Computer picked 4 matchsticks\n");
    //     N=N-4;
    // }
    // while(N>1){
    //      scanf("%d",&X);
    //      while(X>4){
    //          printf("Invalid pick\n");
    //          scanf("%d",&X);
    //      }
    //      Y=5-X;
    //      printf("Computer picked %d matchsticks\n", Y);
    //      N=N-Y-X;
    //      printf("Remaining:%d\n",N);
    //
    // }
    // printf("Computer wins!\n");
    playgame();
    printf("Do you want to play again?(y/n)\n");
    char ch;
    scanf("%c", &ch);
    if(ch=='y'){
      playgame();
    }
 
    // }if(ch=='n'){
    //   exit(0);
    // }
    return 0;
}