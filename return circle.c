//program to return area of a circle
#include <stdio.h>
//#include pi 3.142
int area(int pi,int radius);//function prototype
int main()
{
  int radius, pi=3,result;
  printf("enter the value  of radius:");
  scanf("%d",&radius);
  //area=(pi,radius);
  result = area(pi,radius);
    printf("the area is %d",result);
  return 0;
  }
  //function definition
  int area(int pi,int radius)
{
  int a;
  a=pi*radius*radius;
  return a;
}