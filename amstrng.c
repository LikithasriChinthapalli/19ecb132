#include<stdio.h>  
main()    
{    
int n,r,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=sum+(r*r*r);    
n=n/10;    
}    
if(temp==sum)    
printf("armstrong  number ");    
else    
printf("not armstrong number");      
}   
/* output
  case 1: enter the number=4
not armstrong number
  case 2: enter the number=1
armstrong  number */