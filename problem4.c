// Write a C Program to enter a number and store the
// number across the following structure and print the
// content of each member of the structure. Then
// aggregate each member of the structure to form the
// original number and print the same.
// struct pkt{
// char ch1;
// char ch2[2];
// char ch3;
// };

#include<stdio.h>
struct pkt
{
    char ch1;
    char ch2[2];
    char ch3;
};
int main()
{
    struct pkt pt;
    char num[4];
    printf("\nEnter a number: ");
    scanf("%s",&num);
    pt.ch1 = num[0];
    pt.ch2[0] = num[1];
    pt.ch2[1] = num[2];
    pt.ch3 = num[3];
    printf("\nch1 = %c",pt.ch1);
    printf("\nch2[0] = %c",pt.ch2[0]);
    printf("\nch2[1] = %c",pt.ch2[1]);
    printf("\nch3 = %c",pt.ch3);
    char s[4];
    s[0] = pt.ch1;
    s[1] = pt.ch2[0];
    s[2] = pt.ch2[1];
    s[3] = pt.ch3;
    if(num[0] == s[0] && num[1] == s[1] && num[2] == s[2] && num[3] == s[3])
        printf("\nThe recent number matchs with original number and the number is %s\n",s);
    else
        printf("\nThe recent number doesn't match with original number.\n");
    return 0;
}