#include <stdio.h>
int main()
{
int i,n,total=0;
printf("enter the number: ");
scanf("%d",&n);
for(i=1;i<=n;i++){
if(i%2==1){
	total=total+i;

}
	
}

printf("your total : %d\t",total);


return 0;
}