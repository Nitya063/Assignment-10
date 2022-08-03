#include<stdio.h>
int fact(int);
int main()
{
   int n;
   printf("Enter the number.\n");
   scanf("%d",&n);
   printf("Factorial of %d = %d ",n,fact(n));
   return 0;

}
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}



