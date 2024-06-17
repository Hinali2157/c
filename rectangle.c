#include <stdio.h>

void area(){
    int l=4;
    int w=5;
    int total;
    total =l*w;
    printf("area of rectangle:%d\n",total);
}
int area1(){
    int l=8;
    int w=9;
    int total;
    total=l*w;
    return total;
}
int main(){
    area();
    int total;
    total=area1();
printf("area of rectangle:%d",total);
}
