#include <stdio.h>
int main()
{ 
char word;
printf("enter the word: ");
scanf("%c",&word);
if(word=='A' || word=='E' || word=='I' || word=='O' || word=='U'||
word=='a' ||word=='e' ||word=='i' ||word=='o'||word=='u')
 {
 printf( "'%c' is vowel",word);
 }else{
 printf( "'%c' is not vowel",word);
 }



return 0;
}