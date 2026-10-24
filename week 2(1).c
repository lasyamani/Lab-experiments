#include<stdio.h>

void main()
{
       int a,b,c,sum;
       float average;
       
       printf("Enter the a,b,c values ");
       scanf("%d%d%d",&a,&b,&c);
       
       sum =(a+b+c );
       printf("\n %d is sum",sum);
       
       average = (sum)/3;
       printf(" \n %f is average ",average);
      
      }
