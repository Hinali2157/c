#include <stdio.h>
int main()
{
	int colums=11;
for(int i=1;i<=5;i++){
for(int j=1;j<=5;j++){

printf("%d\t",colums);

colums++; 

}

printf("\n");
colums+=5;
}

return 0;
}