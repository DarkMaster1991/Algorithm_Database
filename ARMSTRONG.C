#include <stdio.h>
#include <conio.h>
void main()
{
 int num,n,sum=0,rem;
 printf("\n Enter a number\n");
 scanf("%d",&num);
 n=num;
 while(n!=0)
 {
  rem=n%10;
  sum+=rem*rem*rem;
  n/=10;
 }
 if(sum==num)
  {
   printf("Armstrong Number");
  }
 else
  printf("Not Armstrong Number");
  getch();
}