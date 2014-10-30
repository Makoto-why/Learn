#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  int i=0,j=0,t=0,m=0,k=0,A=0,B=0;
  int n=0;
  int guess[4]={0,0,0,0};
  int g[4]={0,0,0,0};
  srand((unsigned)time(NULL));
  guess[0]=rand()%9+1;
  for (i=1;i<4;i++) 
  {
    Lab: guess[i] = rand() % 10 ;
    for (j=0;j<i;j++) 
    { 
      if (guess[i] == guess[j]) goto Lab;
    }
  }
 while (A!=4)
 {
   A=0,B=0;
   printf("Please input the number you guess(between 1000 to 9999)\n");
  scanf("%d",&n);
  for (i=3;i>-1;i--)
  {
    g[i]= n % 10;
    n = n / 10;
  }
  for (i=0;i<4;i++)
  {
    if(guess[i]==g[i])
    {
      A=A+1;
    }
  }
  for(i=0;i<4;i++)
  {
     for(j=0;j<4;j++)
     {
        if(g[i]==guess[j]&&i!=j)
        {
          B=B+1;
        }
     }
  }
  printf("\n%dA%dB\n",A,B);
  }
  if (A==4)
  {
    printf("Congratulations!The number is %d%d%d%d",guess[0],guess[1],guess[2],guess[3]);
  }  
  return 0;
 }
