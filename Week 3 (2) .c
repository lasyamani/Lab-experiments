#include<stdio.h>
#include<math.h>
void main()
{
     int p,t,r;
     float ci,m;
     
     printf("Enter the principle amount,time period,rate of intrest ");
     scanf("%d%d%d",&p,&t,&r);
     
     m = p* pow((1+r/100.0),t);
     printf("\n %f is final amount",m);
     
     ci= (m-p);
     printf("\n %f is compound intrest",ci);
     
    
     
 }
