 //natural numbers
 #include<stdio.h>
 int main()
 {
   int i,sum=0;
   for(i=1; i<=100; i++)
   {
       printf("%d ",i);
     sum=sum+i;
     }
   printf("\n the sum is %d ",sum);
   return 0;
 }