#include <stdio.h>
int main()
{
int number;
char word;
printf("enter the word= ");
scanf("%c",&word);
if(word>=65 && word<=90){
	printf("%c",word+32);

	
}else {
	printf("%c",word-32);
}



return 0;
}