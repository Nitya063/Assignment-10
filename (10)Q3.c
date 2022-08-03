#include<stdio.h>
int check(int);
int main()
{
   int n;
   printf("Enter the number.\n");
   scanf("%d",&n);
  if(check(n))
    printf("It is an even no.");
  else
    printf("It is an odd no.");
   return 0;

}
int check(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}

