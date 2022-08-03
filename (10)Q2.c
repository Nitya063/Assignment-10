#include<stdio.h>
float interest(int,float,int);
int main()
{
   int p,t;
   float r;
   printf("Enter the principal amount ,rate of interest and time period.\n");
   scanf("%d%f%d",&p,&r,&t);
   printf("Simple Interest = %f.",interest(p,r,t));
   return 0;

}
float interest(int p,float r,int t)
{
    return (p*r*t)/100;
}

