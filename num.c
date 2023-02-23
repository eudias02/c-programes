 //natural numbers
 #include<stdio.h>
 int main()
   int i,num,sum=0;
   printf("enter a number:");
   scanf("%d",&num);
   for(i=1; i<=num; i++)
   {
       printf("%d ",i);
     sum=sum+i;
     }
   printf("\n the sum is %d",sum);
   return 0;
 }