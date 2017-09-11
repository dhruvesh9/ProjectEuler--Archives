#include<stdio.h>
void main(){
int t1=0,t2=1,next=0;
int n=4000000;
int sum=0;
printf("%d %d ",t1,t2);  // 0 1
next = t1 + t2;        // next = 0 + 1 = 1
while(next<=n){         
printf(" %d ",next);  // next = 1
t1=t2;              // t1 = 1
t2=next;            // t2 = 1
next=t1+t2;

if(next%2==0){
   sum=sum+next;
}         
}
printf("\n");
printf("%d",sum);
}
