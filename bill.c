#include <stdio.h>
int main()
{
float unit,total;
printf("enter the unit: ");
scanf("%f",&unit);

if(unit<=100){
	total=unit*0.60+50;
}else if (unit>100 && unit<=200) 
{
	total=unit*0.80+50;
}
else if(unit>200 && unit<=300)
{
		total=unit*0.90+50;
}
else{
		printf("bill fail");
	}
	
	
	if(total>300){
		total=total*15/100+total;
		printf("your total amount is:%f",total);
	}else{
		printf("your total amount is:%f",total);
	}




return 0;
}