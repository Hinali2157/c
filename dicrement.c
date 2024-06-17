#include <stdio.h>
int main(){
int i,j;
for (int i=0; i<5;i++)
{
    for(int j=0; j<i;j++){
         printf("  ");
    }
        for(int k=5-i;k>=1;k--){
 printf("%d ",k);
        
        }
        printf("\n");
}
    return 0;
}