#include<stdio.h>

void main()
{

    float p,t,r,si;
    
    printf("\n Enter the principle_amount ");
    scanf("%f",&p);
 
 
 
     printf("\n Enter the rate of intrest ");
    scanf("%f",&r);
    
    

      printf("\n Enter the time_period ");
    scanf("%f",&t);
    
    si= (p*t*r)/100;
    printf("%f is simple_intrest ",si );
    
    
     
 }