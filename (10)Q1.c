#include<stdio.h>
float area(int);
int main()
{
   int r;
   printf("Enter the radius of the circle.\n");
   scanf("%d",&r);
   printf("Area of the circle is = %f.",area(r));
   return 0;

}
float area(int r)
{
    return 3.14*r*r;
}
