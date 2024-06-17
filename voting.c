#include <stdio.h>
int main()
{
	int age;
	printf("enter the age= ");
	scanf("%d",&age);
	if(age>18){
		printf("you are able for voting");
	}else{
		printf("you aren't able for voting");
	}
	
return 0;
}