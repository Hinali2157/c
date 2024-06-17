#include <stdio.h>
int main()
{
    int student[3];
    int marks[5];
    int total = 0, pr;
    for (int i = 0; i < 3; i++)
    {
         total = 0;
         pr=0;
        printf("\nenter the roll no:");
        scanf("%d", &student[i]);
        for (int j = 0; j < 5; j++)
        {
            printf("enter your marks:");
            scanf("%d", &marks[j]);
            total += marks[j];
            pr = total / 5;
        }
        printf("total:%d", total);
        printf("\npr:%d", pr);
        if(pr>85){
            printf("\ngrade a");
        }else if(pr<85 && pr>75){
            printf("\ngrade b");
        }else if(pr<75 && pr>65){
            printf("\n grade c");
        }else if(pr<65 && pr>55){
            printf("\n grade d");
        }else{
            printf("fail");
        }
    }
    return 0;
}