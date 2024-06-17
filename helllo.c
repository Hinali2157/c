#include <stdio.h>
#include <string.h>
int main()
{
    char name[5]={'h','e','l','l','o'};
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            printf("%c\t",name[j]);    
        }printf("\n");
    }
    return 0;
}