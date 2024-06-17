#include <stdio.h>
int main()
{
    int i,oddsum=0,evensum=0;
int arrey[10];
for(i=0;i<10;i++){
    printf("enter the arrey of %d possition: ",i);
    scanf("%d",&arrey[i]);
    if(arrey[i]%2==0){
        evensum=evensum+arrey[i];
    }else{
        oddsum=oddsum+arrey[i];
    }
}printf("evensum: %d",evensum);
printf("\noddsum:%d",oddsum);

    return 0;
}