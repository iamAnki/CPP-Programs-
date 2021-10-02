#include <stdio.h>

int main (int argc, char * argv[]) 
{
    int i = 0;
    int list[] = {0,1,2,3,4,5,6,7,8,9,10};
    int run = 1;
    
    int length_of_list;
    
    length_of_list = sizeof(list) / sizeof(int);

    while(run)
    {
        printf("The list is: %d\n",list[i]);
        i++;

        if (i == length_of_list)
        {
            printf("The list has ended!\n");
            break;
        }
    }


  return 0;
}