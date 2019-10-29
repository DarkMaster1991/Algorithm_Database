#include <stdio.h>
#include <conio.h>
void main()
 {
  int i,n,t1=0,t2=1,t;
  printf("\n Enter the number of terms \n");
  scanf("%d",&n);
  printf("\n Fibonacci Series:\n");
  for(i=0;i<n;i++)
   {
    printf("%d, ",t1);
    t=t1+t2;
    t1=t2;
    t2=t;
   }
  getch();
 }