#include<stdio.h>
#include<conio.h>
int main()
{
   int num;
   clrscr();
   printf("Enter an integer:");
   scanf("%d",&num);
   if ( num%2 == 0 )
      printf("%d is an even number", num);
   else
      printf("%d is an odd number", num);
   return 0;
}
