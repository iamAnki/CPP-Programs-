#include<stdio.h>
int main()
{
char c;
printf("Enter a character: ");
scanf("%c",&c);
 if (c >= 'a' && c <= 'z') 
 {
 c=c-32;
 printf("Alphabet in uppercase is %c\n", c);
 }
 else if(c >= 'A' && c <= 'Z')
 {
 c=c+32;
 printf("Alphabet in lower case is %c\n", c);
 }
 else if (c >= '0' && c <= '9')
 printf("%c is a digit\n ", c);
 else
 printf("%c is a special character\n", c);
 return 0;
}
