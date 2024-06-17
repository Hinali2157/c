#include <stdio.h>
int main()
{ 
int h,n1;
printf("enter minus number: ");
scanf("%d",&n1);

for(h=-n1;h<=n1;h++){
	printf("%d\t",h);
}


return 0;
}