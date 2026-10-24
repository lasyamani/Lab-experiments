#include<stdio.h>
#include<math.h>
void main()
{
     
     float a,b,c,s,area;
     
     printf("\n Enter the a,b,c values");
     scanf("%f%f%f",&a,&b,&c);
     
     s= (a+b+c)/2;
     
     area = sqrt( s*(s-a)*(s-b)*(s-c));
     
     printf("\n %f is area of triangle" ,area);
    
     
 }