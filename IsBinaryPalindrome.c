/*
Check palindrome of Binary Numbers
*/

#include<stdio.h>
#include<string.h>
#include <stdbool.h>
char* getBinary(int x)
{
  char ary[64];
  int i=0;
  while(x>0)
  {
    ary[i++]=x%2;
    x/=2;

  }
return ary;
}
bool isPalindrome(char ary[])
{
  int len=strlen(ary);
  printf("\n%d\n", len);
  return false;
}
int main()
{
int x=0;
int choice=1;
char *array;
printf("Choice:\n1.Get N\n2.Generate Binary Equivalent\n3.Check Palindrome\n4.Exit \nEnter choice: ");
scanf("%d",&choice);
while(choice!=4)
{
  switch (choice) {
    case 1:
          printf("Enter N:" );
          scanf("%d",&x);
          break;
    case 2:
          printf("\nGenerating Binary");
          array=getBinary(x);
          break;
    case 3:
          if(isPalindrome(array))
          {
            printf("\n%d is a binary palindrome!",x);
          }
          else
          {
            printf("\n%d is not a binary palindrome!",x);
          }
          break;
    case 4:
          break;
  }
  printf("Choice:\n1.Get N\n2.Generate Binary Equivalent\n3.Check Palindrome\n4.Exit \nEnter choice: ");
  scanf("%d",&choice);
}

return 0;
}
