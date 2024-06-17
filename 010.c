#include <stdio.h>
int main()
    {
        int i,j,h;
        for(i=0;i<=5;i++){
            for(j=0;j<=i;j++){
if(h%2==0){
    printf("%d",1);
}else{
    printf("%d",0);
}
         h++;    }
           
            printf("\n");
        }
        return 0;
    }
