#include<stdio.h>
int fact(int);
int combination(int,int);
int main()
{
   int n,r;
   printf("Enter the total number of items and number of items to be selected.\n");
   scanf("%d%d",&n,&r);
   printf("The number of combinations one can make from %d items and %d selected at a time is %d.",n,r,combination(n,r));
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
int combination(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}



