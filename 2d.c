#include <stdio.h>
int main(){
int i,j;
int arrey[3][3],total=0,sum=0,total1=0;
for (int i=0;i<3;i++){
	for (int j=0;j<3;j++){
	printf("enter the element of row:%d and colum:%d\t",i,j);
	scanf("%d",&arrey[i][j]);

}

}for (int i=0;i<3;i++){
	for (int j=0;j<3;j++){
	printf("%d\t",arrey[i][j]);
if(i>j){
	sum=sum+arrey[i][j];

}else if(i<j){
	total1=total1+arrey[i][j];
	
}else{
	total=total+arrey[i][j];
	
}
}

printf("\n");
}printf("lower triangle total: %d",sum);
printf("\nuper triangle total: %d",total1);
printf("\ndaigonal total: %d",total);
return 0;
}