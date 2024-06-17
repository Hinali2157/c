#include <stdio.h>
int main()
{
int maths,eng,sci,obtain_marks,pr;
printf("enter maths marks: ");
scanf("%d",&maths);
printf("enter eng marks: ");
scanf("%d",&eng);
printf("enter sci marks: ");
scanf("%d",&sci);
obtain_marks=maths+eng+sci;
printf("obtain_marks:%d \n",obtain_marks);
pr=obtain_marks/3;
printf("pr:%d",pr);


return 0;
}