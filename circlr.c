#include <stdio.h>
void area(){
    int r=5;
    int pi=3.14;
    int total;
    total=pi*r*r;
    printf("%d",total);
}
int area1(){
    int r=4;
    int pi=3.15;
    int total;
    total=pi*r*r;
    return total;
}
int main(){
area();
int total;
total=area1();
printf("\n%d",total);
return 0;
}