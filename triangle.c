#include <stdio.h>
void area(){
    int b=10;
    int l=10;
    int total;
    total=(b*l)/2;
    printf("area:%d",total);
}
int area1(){
    int l=6;
    int b=6;
    int total;
    total=(b*l)/2;
    return total;
}
int main(){
    area();
    int total;
    total = area1();
    printf("\n area:%d",total);
    return 0;
}