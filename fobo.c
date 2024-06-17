#include <stdio.h>
int main()
{
int i,n,total=1;
printf("enter the number: ");
scanf("%d",&n);
for(i=1;i<=n;i++){
	printf("%d\t",total*i);
	total=total*2;
	
}

return 0;
}