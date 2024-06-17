#include <stdio.h>
int main(){
int i,j,k=0;

for(i=1;i<=5;i++){
	for(j=1;j<=i;j++){
		if(k%2==0){
          printf("%d",1);
		}else{
			printf("%d",0);
	
		}		k++;
	}
	printf("\n");
	
	
}

return 0;
}