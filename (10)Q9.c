#include<stdio.h>
int check(int,int);
int main()
{
   int n,r;
   printf("Enter the number and digit.\n");
   scanf("%d%d",&n,&r);
   if(check(n,r))
    printf("%d contains digit %d",n,r);
   else
    printf("%d does not contains digit %d.",n,r);
   return 0;

}
int check(int n,int r)
{
    int x;
    while(n)
    {
      x=n%10;
      if(x==r)
            return 1;
      n=n/10;
    }
    return 0;

}





