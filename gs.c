#include <stdio.h>
int main()
{
int bs,gross_salary;
printf("enter the basic salary: ");
scanf("%d",&bs);
if(bs<=5000){
	gross_salary=bs+bs*8/100+bs*20/100;
	printf("gross_salary: %d",gross_salary);
}else if(bs>5000 && bs<=10000){
gross_salary=bs+bs*12/100+bs*30/100;
	printf("gross_salary: %d",gross_salary);
}else if(bs>10000 && bs<=15000){
	gross_salary=bs+bs*15/100+bs*40/100;
	printf("gross_salary: %d",gross_salary);
}else if(bs>15000){
	gross_salary=bs+bs*20/100+bs*50/100;
	printf("gross_salary: %d",gross_salary);
}else{
	printf("gross_salary: %d",gross_salary);
}
return 0;
}
