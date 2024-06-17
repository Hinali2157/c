#include <stdio.h>
int main()
{
int i,n,sum=0;
printf("enter the length of arrey:");
scanf("%d",&n);
int number[n];
for(i=0;i<n;i++){
printf("enter the element of %d possition:",i);
scanf("%d",&number[i]);}
for(i=0;i<n;i++){
	printf("%d\t",number[i]);
	sum=sum+number[i];
}printf("sum is:%d",sum);


return 0;
}