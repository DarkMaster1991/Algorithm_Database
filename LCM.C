#include <stdio.h>
#include <conio.h>
int main()
 {
  int n1,n2,check,i;
  printf("\nEnter two numbers\n");
  scanf("%d%d",&n1,&n2);
  if(n1>n2)
   {
    check=n1;
   }
  else
   {
    check=n2;
   }
  for(i=0;;i++)
   {
    if(check%n1==0 && check%n2==0)
     {
      printf("\n LCM = %d \n",check);
      break;
     }
    ++check;
   }
  getch();
 }