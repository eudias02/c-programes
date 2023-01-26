//programe to find interest
#include<stdio.h>
int main()
{
int t,r,p,n, interest;
printf("\ln enter value of t:");
scanf("%d",&t);
printf("\ln enter value of r:");
scanf("%d",&r);
printf("\ln enter value of p:");
scanf("%d",&p);
printf("\ln enter value of n:");
scanf("%d",&n);
interest=p(1+r/n)^(n*t);
printf("interest=%d",interest);
return 0;
}