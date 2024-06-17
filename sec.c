#include <stdio.h>
int main()
{
int min,hour,totalsec,sec;
printf("enter the sec: ");
scanf("%d",&totalsec);
hour= totalsec/3600;
min=(totalsec-(hour*3600))/60;
sec=(totalsec-(hour*3600)-(min*60));
printf("\n hour:min:sec ");
printf("%d:%d:%d",hour,min,sec);
 return 0;
 }