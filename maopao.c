#include<stdio.h>
int main()
{
  int n=0,i=0,j=0,min=0,t=0;
  bollean sta=false;
  printf("Please input the length of the array\n");
  scanf("%d",&n);
  int a[n];
  for (i=0;i<n;i++)
  {
    printf("Please input a[%d]",i);
    scanf("%d",&a[i]);
  }
  sleep(1);
  for(i=0;i<n;i++)
  {
    min=a[i];
    for(j=i+1;j<n&&sta=false;j++)
    {
      sta=true;
      if(min<a[j])
      {
        min=a[j];
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        sta=false;
      }
    }
  }
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
}
      
