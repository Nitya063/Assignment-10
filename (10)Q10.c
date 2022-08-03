#include<stdio.h>
void prime_factors(int);
int main()
{
   int n;
   printf("Enter the number.\n");
   scanf("%d",&n);
   prime_factors(n);
   return 0;

}
void prime_factors(int n)
{
    int i;
    printf("Prime factors of %d :",n);
    for(i=2;n!=1;i++)
    {
    while(n%i==0)
    {
      n=n/i;
      printf(" %d ",i);
    }
    }

}






