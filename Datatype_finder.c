// Code to find data type

#include<stdio.h> //Datatype Finder...

int main(){
    int b;
    char a;
    printf("Welcome to Datatype Finder Program\n");
    printf("Enter any 1 Charactor/Digit/Symbol: ");
    scanf("%c",&a);
    b=a;
    printf("ASCII Value of %C is %d \n",a,a);
    if(b>=65 && b<=90){
        printf("It is Capital Character\n");
    }
    if(b>=97 && b<=122){
        printf("It is Small Character\n");
    }
    if(b>=48 && b<=57){
        printf("It is Digit\n");
    }
    if(b>=33 && b<=47 || b>=58 && b<=64){     
        printf("It is Symbol\n");
    }
    // else{
    //     printf("NOT Defined\n");
    // }
    //There are some keywords too but just consider it symbol for now
    return 0;
}