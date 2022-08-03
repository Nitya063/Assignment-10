#include<stdio.h>
void print(int);
int main()
{
   int n;
   printf("Enter the limit.\n");
   scanf("%d",&n);
   print(n);
   return 0;

}
void print(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d\n",(2*i)-1);
    }
}



