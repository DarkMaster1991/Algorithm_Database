#include <stdio.h>
#include <conio.h>
int main()
{
char c;
float n1,n2;
printf("\nEnter operator +,-,*,/");
scanf("%s",&c);
printf("\nEnter 2 numbers");
scanf("%f%f",&n1,&n2);
switch (c)
{
 case'+' :
	  printf("%f+%f=%f",n1,n2,n1+n2);
	  break;
 case'-' :
	  printf("%f-%f=%f",n1,n2,n1-n2);
	  break;
 case'*' :
	  printf("%f*%f=%f",n1,n2,n1*n2);
	  break;
 case'/' :
	  printf("%f/%f=%f",n1,n2,n1/n2);
	  break;
 default :
	  printf("error");
	  break;
}
return (0);
}