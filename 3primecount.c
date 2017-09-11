//A simple C program 
#include<stdio.h> 
#include<math.h> 
void main()
{
 long long int num=600851475143,i=1,j,k,p;
  while(i<=sqrt(num))
  {
   k=0; 
   if(num%i==0)
   {
    j=1;
     while(j<=i)
     { 
     if(i%j==0) 
            k++; 
            j++; 
     } 
     if(k==2) 
            p=i;
       }
       i++; 
       } 
       printf("%lld",p); 
       }
