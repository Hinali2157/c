#include <stdio.h>
void area(){
    int r=5;
    int total;
    total=r*r;
    printf("area of aquare:%d",total);
}
int area1(){
    int r=8;
    int total;
    total=r*r;
    return total;
}
int main(){
    area();
    int total;
    total=area1();
    printf("\narea of square:%d",total);
    return 0;
}