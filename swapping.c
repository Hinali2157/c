#include <stdio.h>
int main()
{
int a,b,c;
printf("enter a=");
scanf("%d",&a);
printf("enter b =");
scanf("%d",&b);

c=a;
a=b;
b=c;
printf("after swapping \na=%d \n b=%d\n",a,b);
return 0;
}