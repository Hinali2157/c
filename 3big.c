#include <stdio.h>
int main()
{
	int a= 40;
	int b= 20;
	int c= 30;
	
if(a>b && a>c){
printf("a is big");
if(b>c && b>a){
	printf("b is big");
}
}
else{
	printf("c is big");
}
return 0;
}