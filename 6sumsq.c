#include<stdio.h>
int SquareOfSum(int n){
int i;
int sum=0;
   for(i=1;i<=n;i++){
      sum=sum+i;
   }
   int sqofsu;
   sqofsu=sum*sum;
   return sqofsu;
}

int SumOfSquares(int n){
int i;
int sum=0;
   for(i=1;i<=n;i++){
   sum=sum+i*i;
   }
   return sum;
}

void main(){
int diff;
diff=SquareOfSum(100)-SumOfSquares(100);
printf("%d",diff);
}
